#pragma once
#include<string>
#include<iostream>
#include "book.h"

using namespace std;

void Inputbook(Book mas[], const int size)
{
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < size; i++)
	{
		cout << "Dannie knigi " <<i+1<< endl;
		mas[i].Inbook();
		system("cls");
	}
}

void Out_book(Book mas[], const int size)
{
	setlocale(LC_ALL, "rus");
	cout << "\tBiblioteka" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Dannie knigi " <<i+1<< endl;
		cout << "\n";
		mas[i].Outbook();
		cout << "\n\n";
	}
}
void Outboook(Book mas[], const int size)
{
	setlocale(LC_ALL, "Rus");
	string x;
	bool mist=false;
	do
	{
	cout << "\t\tVvedite nazvanie filtra " << endl;
	cout << "\tname / avtor / genre / publishing / year  " << endl;
	cin >> x;
	system("cls");
	if (x == "name") {
		cout << " Nazvanie knig " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ".  " << mas[i].name << endl;
		}
	}
	else if (x == "avtor") {
		cout << " Avtori knig " << endl;
		for (int i = 0; i < size; i++)
		{
			cout <<i+1<<".  "<< mas[i].avtor << endl;
		}
	}
	if (x == "genre") {
		cout << " Ganri knig " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ".  " << mas[i].genre << endl;
		}
	}
	if (x == "publishing") {
		cout << " Izdatelstva knig " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ".  " << mas[i].publishing << endl;
		}
	}
	if (x == "year") {
		cout << " Godi izdaniay " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ".  " << mas[i].year << endl;
		}
	}
	if (x != "name" && x != "avtor" && x != "genre" && x != "publishing" && x != "year")
	{
		cout << "\tNepravilnoe znachenie \tPovtorite vvod\n";
		mist=true;
	} else{
		mist = false;
	}
  }while (mist);
}

void Redact(Book mas[], const int size)
{
	setlocale(LC_ALL, "Rus");
	int num;
	cout << "\n\tVvedite odnu iz " << size << " knig dlay redaktirovaniay  \n";
	cin >> num;
	system("cls");
	cout << "\n\tVnesite izmeneniay \n" << endl;
	mas[num-1].Inbook();
	system("cls");
	
}


