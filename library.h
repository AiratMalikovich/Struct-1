#pragma once
#include <string>

using namespace std;

struct Library{
    string title;
    string author;
    string publishingHouse;
    string genre;
};

void PrintBookInformation(Library Book[], int numberBook) {
    system("cls");
    if(numberBook>10 || numberBook<1) {
        cout << "Библиотека не содержит книги под таким номером" << endl;
    }
    else {
    cout << "======================================================================" << endl;
    cout << "Книга № " << numberBook << endl;
    --numberBook;
    cout << "Название книги: " << "\t" << Book[numberBook].title << endl
         << "Автор: " << "\t\t\t" << Book[numberBook].author << endl
         << "Издательство: " << "\t\t" << Book[numberBook].publishingHouse << endl
         << "Жанр: " << "\t\t\t" << Book[numberBook].genre << endl << endl;
    cout << "======================================================================" << endl;
    }
    system("pause");
}

void PrintFullInformation(Library Book[], const int SIZE) {
    system("cls");
    for(int i=0; i<SIZE; i++) {
    cout << "======================================================================" << endl;
    cout << "Книга № " << i+1 << endl;
    cout << "Название книги: " << "\t" << Book[i].title << endl
         << "Автор: " << "\t\t\t" << Book[i].author << endl
         << "Издательство: " << "\t\t" << Book[i].publishingHouse << endl
         << "Жанр: " << "\t\t\t" << Book[i].genre << endl << endl;
    cout << "======================================================================" << endl;
    }
    system("pause");
}

void Addinformation(Library Book[], int &count) {
    system("cls");
    if(count>9) {
        cout << "Библиотека полностью заполнена" << endl;
        system("cls");
    }
    else {
        cout << "======================================================================" << endl;
        cout << "Для окончания ввода информации введите ';'" << endl;
        cout << "Книга № " << count+1 << endl;
        cout << "Укажите название книги: " << "\t"; getline(cin,Book[count].title,';');
        cout << "Укажите автора: " << "\t\t"; getline(cin,Book[count].author,';');
        cout << "Укажите издательство: " << "\t\t"; getline(cin,Book[count].publishingHouse,';');
        cout << "Укажите жанр: " << "\t\t\t"; getline(cin,Book[count].genre,';');
        cout << "======================================================================" << endl << endl;
        ++count;
    }
}

void RedactBook(Library Book[], int numberBook) {
    if(numberBook>10 || numberBook<1) {
        cout << "В библиотеке не содержится книги под таким номером" << endl;
    }
    else {
        cout << "Вы выбрали книгу №" << numberBook << endl;
    }
    numberBook--;
    cout << "Вы можете отредактировать следующие поля: " << endl
         << "[1] Название" << endl
         << "[2] Автор" << endl
         << "[3] Издательство" << endl
         << "[4] Жанр" << endl;
    int choice;
    do {
        cout << "Выберите поле, которое нужно отредактировать (1-4): "; cin >> choice;
        if(choice>4 || choice <1) {
            cout << "Редактирование данного поля невозможно" << endl;
        }
    }while(choice>4 || choice<1);
    cout << "======================================================================" << endl;
    cout << "Для окончания ввода информации нажите ';'" << endl;
    switch(choice) {
    case 1:
        cout << "Укажите новое название книги: " << "\t";
        getline(cin,Book[numberBook].title,';');
        break;
    case 2:
        cout << "Укажите нового автора: " << "\t\t"; getline(cin,Book[numberBook].author,';');
        break;
    case 3:
        cout << "Укажите новое издательство: " << "\t\t"; getline(cin,Book[numberBook].publishingHouse,';');
        break;
    case 4:
        cout << "Укажите новый жанр: " << "\t\t\t"; getline(cin,Book[numberBook].genre,';');
        break;
    }
    cout << "======================================================================" << endl << endl;
}
