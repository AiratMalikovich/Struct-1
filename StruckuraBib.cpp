#include "StruckuraBib.h"
#include<iostream>

void Biblioteka::Show() {

	cout << " ������������. ������� ���������� ������ ,������ ���� ����.  " << endl;
	cout << " ������� ��� ��� -  " << Name << endl;
	cout << " ������� ��� ������ ����� (�������� ��������� ����) -  " << Avtor << endl;
	cout << " ������� ������������ ����� (�������� ��������� ����)  -  " <<Izdatelstwo << endl;
	cout << " ������� ���� ����� -  " << Janr << endl;
	cout << " ������� ��� ������� � ����� -  " << age << endl;

}
void Biblioteka::Input() {
	cout << " ������������. ������� ���������� ������ ,������ ���� ����.  " << endl;
	cout << " ������� ��� ��� -  "; cin >> Name; ;
	cout << " ������� ��� ������ ����� (�������� ��������� ����) -  "; cin >> Avtor;
	cout << " ������� ������������ ����� (�������� ��������� ����)  -  ";cin>> Izdatelstwo;
	cout << " ������� ���� ����� -  "; cin>> Janr;
	cout << " ������� ��� ������� � ����� -  ";cin>> age;}

void Biblioteka::Append(string Name, string Avtor, string Izdatelstwo,
	string Janr, int age) {
	this->Name = Name;
	this->Avtor = Avtor;
	this->Izdatelstwo = Izdatelstwo;
	this->Janr = Janr;
	this->age = age;

}


