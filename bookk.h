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
		cout << "������ ����� " <<i+1<< endl;
		mas[i].Inbook();
		system("cls");
	}
}

void Out_book(Book mas[], const int size)
{
	setlocale(0, "rus");
	cout << "\t����������" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "������ ����� " <<i+1<< endl;
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
	cout << "\t\t������� �������� ������� " << endl;
	cout << "\tname / avtor / genre / publishing / year  " << endl;
	cin >> x;
	if (x == "name") {
		cout << " �������� ���� " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].name << endl;
		}
	}
	else if (x == "avtor") {
		cout << " ������  ���� " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].avtor << endl;
		}
	}
	if (x == "genre") {
		cout << " ���� ���� " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].genre << endl;
		}
	}
	if (x == "publishing") {
		cout << " ������������ ���� " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].publishing << endl;
		}
	}
	if (x == "year") {
		cout << " ���� ������� ���� " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << mas[i].year << endl;
		}
	}
	if (x != "name" && x != "avtor" && x != "genre" && x != "publishing" && x != "year")
	{
		cout << "\t������������ ����\n \t��������� ����\n";
		mist=true;
	} else{
		mist = false;
	}
  }while (mist);
}

void Redact(Book mas[], const int size)
{
	int num;
	cout << "\n\t�������� ���� �� " << size << " ���� ��� ��������������  \n";
	cin >> num;
	cout << "\n\t������� ���������\n" << endl;
	mas[num-1].Inbook();
	
}


