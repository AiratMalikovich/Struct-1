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
            cout << "��� �������� ��������� �������:" << endl
                 << "[1] �������� ����� ����� � ����������" << endl
                 << "[2] ��������������� ���������� � ����� � ����������" << endl
                 << "[3] �������� ���������� � ������������ ��� �����" << endl
                 << "[4] �������� ���������� � ���� ������ ��������� � ����������" << endl
                 << "[5] ��������� ��������� ���������� � ����" << endl
                 << "[6] ����� �� ���������" << endl;
            cout << "======================================================================" << endl;
            cout << "������� ����� �� 1 �� 6 ��� ������ ��������: "; cin >> choice;
            if(choice>6 || choice <1) {
                cout << "������ �������� ���������� ���������. ��������� �������" << endl;
                system("pause");
                }
        }while(choice>6 || choice<1);

        switch(choice) {
        case 1:
            Addinformation(Book,count);
            break;
        case 2:
            cout << "������� ����� �����, ������� �� ������ ��������������: "; cin >> numberBook;
            RedactBook(Book,numberBook);
            break;
        case 3:
            cout << "������� ����� �����, ���������� � ������� �� ������ ����������: "; cin >> numberBook;
            PrintBookInformation(Book,numberBook);
            break;
        case 4:
            PrintFullInformation(Book, SIZE);
            break;
        case 5:
            Save.open(path,ofstream::trunc);
            if(!Save.is_open()) {
                cout << "������ ������ ���������� � ����" << endl;
                }
            else {
                cout << "������ ������� ��������� � ���� Save.txt" << endl;
                    for(int i=0; i<count; i++) {
                        Save.write((char*)&Book[i],sizeof(Library));
                        }
            }
            Save.close();
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "�������, ��� ��������������� ����� ����������" << endl;
            exit(0);
        }
    }while(choice!=6);

    return 0;
}


