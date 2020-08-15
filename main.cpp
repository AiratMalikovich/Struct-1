#include <iostream>
#include <fstream>
#include "library.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");

    const int SIZE = 10;
    int count = 0;
    int numberBook;
    int choice;

    Library Book[SIZE];

    ofstream Save;
    string path = "Save.txt";

    do {
        do {
            system("cls");
            cout << "======================================================================" << endl;
            cout << "Вам доступны следующие функции:" << endl
                 << "[1] Добавить новую книгу в библиотеку" << endl
                 << "[2] Отредактировать информацию о книге в библиотеке" << endl
                 << "[3] Показать информацию о интересующей Вас книге" << endl
                 << "[4] Показать информацию о всех книгах имеющихся в библиотеке" << endl
                 << "[5] Сохранить созданную библиотеку в файл" << endl
                 << "[6] Выйти из программы" << endl;
            cout << "======================================================================" << endl;
            cout << "Введите число от 1 до 6 для выбора действия: "; cin >> choice;
            if(choice>6 || choice <1) {
                cout << "Данное действие невозможно выполнить. Повторите попытку" << endl;
                system("pause");
                }
        }while(choice>6 || choice<1);

        switch(choice) {
        case 1:
            Addinformation(Book,count);
            break;
        case 2:
            cout << "Укажите номер книги, которую Вы хотите отредатировать: "; cin >> numberBook;
            RedactBook(Book,numberBook);
            break;
        case 3:
            cout << "Укажите номер книги, информацию о которой Вы хотите посмотреть: "; cin >> numberBook;
            PrintBookInformation(Book,numberBook);
            break;
        case 4:
            PrintFullInformation(Book, SIZE);
            break;
        case 5:
            Save.open(path,ofstream::trunc);
            if(!Save.is_open()) {
                cout << "Ошибка записи информации в файл" << endl;
                }
            else {
                cout << "Данные успешно сохранены в файл Save.txt" << endl;
                    for(int i=0; i<count; i++) {
                        Save.write((char*)&Book[i],sizeof(Library));
                        }
            }
            Save.close();
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "Спасибо, что воспользовались нашей программой" << endl;
            exit(0);
        }
    }while(choice!=6);

    return 0;
}


