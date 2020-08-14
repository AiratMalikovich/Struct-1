#include <iostream>
#include<string>
#include "book.h"

void Book::Outbook()
{
	cout << "nazvanie knigi " << name << endl;
	cout << "avtor knigi  " << avtor << endl;
	cout << "ganr knigi  " << genre << endl;
	cout << "izdatelstvo  " << publishing << endl;
	cout << "god izdaniay  " << year << endl;
}


				
void Book::Inbook()
{
	cout << "Vvedite nazvanie knigi "; cin >> name; 
	cout << "Vvedite avtora knigi  "; cin >> avtor;
	cout << "Vvedite ganr knigi "; cin >> genre;
	cout << "Vvedite izdatelstvo  "; cin >> publishing;
	cout << "Vvedite god izdaniay  ";cin >> year;
}
















