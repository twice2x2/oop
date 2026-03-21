#include "Phone_Book.h"
#include <iostream>
using namespace std;

//Реализация методов класса Contact
//По умолчанию (пустые поля)
Contact::Contact()
    : fio(""), home_phone(""), work_phone(""), description("") {
}

//С заполнением
Contact::Contact(const string& f, const string& hp, const string& wp, const string& desc)
    : fio(f), home_phone(hp), work_phone(wp), description(desc) {
}

//Деконструктор
Contact::~Contact() { 
}

//Добавить имя
void Contact::setFIO(const string& f) {
    fio = f;
}

//Добавить домашний телефон
void Contact::setHomePhone(const string& hp) {
    home_phone = hp;
}

//Добавить рабочий телефон
void Contact::setWorkPhone(const string& wp) {
    work_phone = wp;
}

//Добавить примечания
void Contact::setDescription(const string& desc) {
    description = desc;
}

//Вывод контакта
void Contact::print() const {
    cout << "ФИО:           " << fio << endl;
    cout << "Дом. телефон:  " << (home_phone.empty() ? "-" : home_phone) << endl;
    cout << "Раб. телефон:  " << (work_phone.empty() ? "-" : work_phone) << endl;
    cout << "Примечание:    " << (description.empty() ? "-" : description) << endl;
    cout << "--------------------------------------\n";
}

//Поиск по фио
bool Contact::matchesFIO(const string& search) const {
    return fio == search;
}

//Реализация методов класса PhoneBook
PhoneBook::PhoneBook() : count(0) {
}

//Добавить контакт
bool PhoneBook::add(const Contact& c) {
    if (isFull()) {
        cout << "Телефонная книга переполнена\n";
        return false;
    }
    contacts[count] = c;
    count++;
    cout << "Контакт добавлен\n";
    return true;
}

//Удалание контакта
bool PhoneBook::remove(const string& fio) {
    for (int i = 0; i < count; ++i) {
        if (contacts[i].getFIO() == fio) {
            for (int j = i; j < count - 1; ++j) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            cout << "Контакт удалён.\n";
            return true;
        }
    }
    cout << "Контакт не найден.\n";
    return false;
}

//Поиск контакта
void PhoneBook::search(const string& fio) const {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (contacts[i].matchesFIO(fio)) {
            contacts[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "Ничего не найдено\n";
    }
}

//Показать кол-во контактов
void PhoneBook::showAll() const {
    if (count == 0) {
        cout << "Телефонная книга пуста.\n";
        return;
    }

    cout << "Записей в книге: " << count << "\n";
    for (int i = 0; i < count; ++i) {
        cout << "[" << (i + 1) << "]\n";
        contacts[i].print();
    }
}

//Размер телефонной книжки
int PhoneBook::size() const {
    return count;
}

//Полнота телефонной книжки
bool PhoneBook::isFull() const {
    return count >= MAX_SIZE;
}