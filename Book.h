//
// Created by oleg on 09.08.2020.
//

#ifndef INC_3_BOOK_H
#define INC_3_BOOK_H
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Book {
    string name;
    string autor;
    string brand;
    string genre;
    void BookInput(){
        cout << "\t***Новая книга***" << endl;
        cout << "\tВведите название книги : "; cin >> name;
        cout << "\tВведите автора книги : "; cin >> autor;
        cout << "\tВведите издательство : "; cin >> brand;
        cout << "\tВведите жанр книги : "; cin >> genre;
    }
    void BookEdit(){
        string entry = "0";
        cout << "\t***Редактирование книги***" << endl;
        cout << "Текущее название книги :" << name << endl;
        cout << "Введите новое название или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            name = entry;
            entry = "0";
        }
        cout << "Текущий автор книги :" << autor << endl;
        cout << "Введите нового автора \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            autor = entry;
            entry = "0";
        }
        cout << "Текущее издательство :" << name << endl;
        cout << "Введите новое издательство или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            brand = entry;
            entry = "0";
        }
        cout << "Текущее жанр книги :" << name << endl;
        cout << "Введите новое жанр или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            genre = entry;
            entry = "0";
        }
        cout << "\tРедактирование завершено!" << endl;
    }
    void BookPrint(){
            cout << "Название     : " << name << endl;
            cout << "Автор        : " << autor << endl;
            cout << "Издательство : " << brand << endl;
            cout << "Жанр         : " << genre << endl;
            cout << endl;
    }
};


#endif //INC_3_BOOK_H
