#include<string>
#include "book.h"

void Book::Outbook()
{
	setlocale(0, "");
	cout << "�������� ����� " << name << endl;
	cout << "����� �����  " << avtor << endl;
	cout << "���� �����  " << genre << endl;
	cout << "������������ �����  " << publishing << endl;
	cout << "��� �������  " << year << endl;
}



void Book::Inbook()
{
	setlocale(0, "");
	cout << "������� �������� ����� "; cin >> name; 
	cout << "������� ������ �����  "; cin >> avtor;
	cout << "������� ���� �����  "; cin >> genre;
	cout << "������� ������������ �����  "; cin >> publishing;
	cout << "������� ��� ������� �����  ";cin >> year;
}
















