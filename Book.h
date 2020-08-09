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
    Book BookInput(){
        Book book;
        cout << "\t***Новая книга***" << endl;
        cout << "\tВведите название книги : "; cin >> book.name;
        cout << "\tВведите автора книги : "; cin >> book.autor;
        cout << "\tВведите издательство : "; cin >> book.brand;
        cout << "\tВведите жанр книги : "; cin >> book.genre;
        return book;
    }
    void BookEdit(Book book[], int number){
        string entry = "0";
        cout << "\t***Редактирование книги***" << endl;
        cout << "Текущее название книги :" << book[number].name << endl;
        cout << "Введите новое название или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            book[number].name = entry;
            entry = "0";
        }
        cout << "Текущий автор книги :" << book[number].autor << endl;
        cout << "Введите нового автора \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            book[number].autor = entry;
            entry = "0";
        }
        cout << "Текущее издательство :" << book[number].name << endl;
        cout << "Введите новое издательство или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            book[number].brand = entry;
            entry = "0";
        }
        cout << "Текущее жанр книги :" << book[number].name << endl;
        cout << "Введите новое жанр или \"0\" для отмены : ";
        cin >> entry;
        if (entry != "0"){
            book[number].genre = entry;
            entry = "0";
        }
        cout << "\tРедактирование завершено!" << endl;
    }
    void BookPrint(Book book[], int size){
        cout << "\t***Печать данных о всех книгах***" << endl;
        for (int x = 0; x < size; x++){
            cout << "Книга № " << (x + 1) << endl;
            cout << "Название     : " << book[x].name << endl;
            cout << "Автор        : " << book[x].autor << endl;
            cout << "Издательство : " << book[x].brand << endl;
            cout << "Жанр         : " << book[x].genre << endl;
            cout << endl;
        }
        cout << "\tПечать данных о всех книгах завершена!" << endl;
    }
    void NameSort(Book array[], int size){
        Book temp;
        int smallestIndex;
        for (int x = 0; x < size - 1; x++){
            smallestIndex = x;
            for (int y = x +1; y < size; y++) {
                if (array[y].name < array[smallestIndex].name) {
                    smallestIndex = y;
                }
            }
            temp = array[x];
            array[x] = array[smallestIndex];
            array[smallestIndex] = temp;
        }
    }
    void AutorSort(Book array[], int size){
        Book temp;
        int smallestIndex;
        for (int x = 0; x < size - 1; x++){
            smallestIndex = x;
            for (int y = x +1; y < size; y++) {
                if (array[y].autor < array[smallestIndex].autor) {
                    smallestIndex = y;
                }
            }
            temp = array[x];
            array[x] = array[smallestIndex];
            array[smallestIndex] = temp;
        }
    }
    void BrandSort(Book array[], int size){
        Book temp;
        int smallestIndex;
        for (int x = 0; x < size - 1; x++){
            smallestIndex = x;
            for (int y = x +1; y < size; y++) {
                if (array[y].brand < array[smallestIndex].brand) {
                    smallestIndex = y;
                }
            }
            temp = array[x];
            array[x] = array[smallestIndex];
            array[smallestIndex] = temp;
        }
    }
    void BookNameSearch(Book array[], int size){
        string name;
        cout << "Введите название книги, которое Вы хотите найти : ";
        cin >> name;
        int count = 0;
        cout << "Вот найденые книги: " << endl;
        for (int x = 0; x < size; x++){
            if (array[x].name == name){
                cout << "Книга № " << (x+1) << endl;
                count++;
            }
        }
        if (!count)
            cout << "Не найдено ни одной книни!" << endl;
    }
    void BookAutorSearch(Book array[], int size){
        string autor;
        cout << "Введите Автора книги, которые Вы хотите найти : ";
        cin >> autor;
        int count = 0;
        cout << "Вот найденые книги: " << endl;
        for (int x = 0; x < size; x++){
            if (array[x].autor == autor){
                cout << "Книга № " << (x+1) << endl;
                count++;
            }
        }
        if (!count)
            cout << "Не найдено ни одной книни!" << endl;
    }

};


#endif //INC_3_BOOK_H
