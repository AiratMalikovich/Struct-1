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
        cout << "���������� �� �������� ����� ��� ����� �������" << endl;
    }
    else {
    cout << "======================================================================" << endl;
    cout << "����� � " << numberBook << endl;
    --numberBook;
    cout << "�������� �����: " << "\t" << Book[numberBook].title << endl
         << "�����: " << "\t\t\t" << Book[numberBook].author << endl
         << "������������: " << "\t\t" << Book[numberBook].publishingHouse << endl
         << "����: " << "\t\t\t" << Book[numberBook].genre << endl << endl;
    cout << "======================================================================" << endl;
    }
    system("pause");
}

void PrintFullInformation(Library Book[], const int SIZE) {
    system("cls");
    for(int i=0; i<SIZE; i++) {
    cout << "======================================================================" << endl;
    cout << "����� � " << i+1 << endl;
    cout << "�������� �����: " << "\t" << Book[i].title << endl
         << "�����: " << "\t\t\t" << Book[i].author << endl
         << "������������: " << "\t\t" << Book[i].publishingHouse << endl
         << "����: " << "\t\t\t" << Book[i].genre << endl << endl;
    cout << "======================================================================" << endl;
    }
    system("pause");
}

void Addinformation(Library Book[], int &count) {
    system("cls");
    if(count>9) {
        cout << "���������� ��������� ���������" << endl;
        system("cls");
    }
    else {
        cout << "======================================================================" << endl;
        cout << "��� ��������� ����� ���������� ������� ';'" << endl;
        cout << "����� � " << count+1 << endl;
        cout << "������� �������� �����: " << "\t"; getline(cin,Book[count].title,';');
        cout << "������� ������: " << "\t\t"; getline(cin,Book[count].author,';');
        cout << "������� ������������: " << "\t\t"; getline(cin,Book[count].publishingHouse,';');
        cout << "������� ����: " << "\t\t\t"; getline(cin,Book[count].genre,';');
        cout << "======================================================================" << endl << endl;
        ++count;
    }
}

void RedactBook(Library Book[], int numberBook) {
    if(numberBook>10 || numberBook<1) {
        cout << "� ���������� �� ���������� ����� ��� ����� �������" << endl;
    }
    else {
        cout << "�� ������� ����� �" << numberBook << endl;
    }
    numberBook--;
    cout << "�� ������ ��������������� ��������� ����: " << endl
         << "[1] ��������" << endl
         << "[2] �����" << endl
         << "[3] ������������" << endl
         << "[4] ����" << endl;
    int choice;
    do {
        cout << "�������� ����, ������� ����� ��������������� (1-4): "; cin >> choice;
        if(choice>4 || choice <1) {
            cout << "�������������� ������� ���� ����������" << endl;
        }
    }while(choice>4 || choice<1);
    cout << "======================================================================" << endl;
    cout << "��� ��������� ����� ���������� ������ ';'" << endl;
    switch(choice) {
    case 1:
        cout << "������� ����� �������� �����: " << "\t";
        getline(cin,Book[numberBook].title,';');
        break;
    case 2:
        cout << "������� ������ ������: " << "\t\t"; getline(cin,Book[numberBook].author,';');
        break;
    case 3:
        cout << "������� ����� ������������: " << "\t\t"; getline(cin,Book[numberBook].publishingHouse,';');
        break;
    case 4:
        cout << "������� ����� ����: " << "\t\t\t"; getline(cin,Book[numberBook].genre,';');
        break;
    }
    cout << "======================================================================" << endl << endl;
}
