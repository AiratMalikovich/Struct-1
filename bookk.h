#pragma once
#include<string>
#include<iostream>
#include "book.h"

using namespace std;

void Inputbook(Book mas[], const int size)
{
	setlocale(0, "rus");
	for (int i = 0; i < size; i++)
	{
		cout << "Данные книги " <<i+1<< endl;
		mas[i].Inbook();
		system("cls");
	}
}

void Out_book(Book mas[], const int size)
{
	setlocale(0, "rus");
	cout << "\tБиблиотека" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Данные книги " <<i+1<< endl;
		cout << "\n";
		mas[i].Outbook();
		cout << "\n\n";
	}
}
void Outboook(Book mas[], const int size)
{
	string x;
	bool mist=false;
	do
	{
	cout << "\t\tВведите название фильтра " << endl;
	cout << "\tname / avtor / genre / publishing / year  " << endl;
	cin >> x;
	if (x == "name") {
		cout << " Название книг " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].name << endl;
		}
	}
	else if (x == "avtor") {
		cout << " Авторы  книг " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].avtor << endl;
		}
	}
	if (x == "genre") {
		cout << " Жанр книг " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].genre << endl;
		}
	}
	if (x == "publishing") {
		cout << " Издательства книг " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].publishing << endl;
		}
	}
	if (x == "year") {
		cout << " Годы издания книг " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].year << endl;
		}
	}
	if (x != "name" && x != "avtor" && x != "genre" && x != "publishing" && x != "year")
	{
		cout << "\tНеправильный ввод\n \tПовторите ввод\n";
		mist=true;
	} else{
		mist = false;
	}
  }while (mist);
}

void Redact(Book mas[], const int size)
{
	int num;
	cout << "\n\tВыбирете одну из " << size << " книг для редактирования  \n";
	cin >> num;
	cout << "\n\tВнесите изменения\n" << endl;
	mas[num-1].Inbook();
	
}


