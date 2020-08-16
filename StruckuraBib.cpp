#include "StruckuraBib.h"
#include<iostream>

void Biblioteka::Show() {

	cout << " Здравствуйте. Внесите пожалуйста данные ,взятых вами книг.  " << endl;
	cout << " Введите своё Имя -  " << Name << endl;
	cout << " Введите Имя автора книги (смотрите титульный лист) -  " << Avtor << endl;
	cout << " Введите Издательство книги (смотрите титульный лист)  -  " <<Izdatelstwo << endl;
	cout << " Введите Жанр гниги -  " << Janr << endl;
	cout << " Введите Год выпуска в тираж -  " << age << endl;

}
void Biblioteka::Input() {
	cout << " Здравствуйте. Внесите пожалуйста данные ,взятых вами книг.  " << endl;
	cout << " Введите своё Имя -  "; cin >> Name; ;
	cout << " Введите Имя автора книги (смотрите титульный лист) -  "; cin >> Avtor;
	cout << " Введите Издательство книги (смотрите титульный лист)  -  ";cin>> Izdatelstwo;
	cout << " Введите Жанр гниги -  "; cin>> Janr;
	cout << " Введите Год выпуска в тираж -  ";cin>> age;}

void Biblioteka::Append(string Name, string Avtor, string Izdatelstwo,
	string Janr, int age) {
	this->Name = Name;
	this->Avtor = Avtor;
	this->Izdatelstwo = Izdatelstwo;
	this->Janr = Janr;
	this->age = age;

}


