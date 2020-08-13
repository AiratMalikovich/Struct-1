#include<string>
#include "book.h"

void Book::Outbook()
{
	setlocale(0, "");
	cout << "Название книги " << name << endl;
	cout << "Автор книги  " << avtor << endl;
	cout << "Жанр книги  " << genre << endl;
	cout << "Издательство книги  " << publishing << endl;
	cout << "Год издания  " << year << endl;
}



void Book::Inbook()
{
	setlocale(0, "");
	cout << "Введите название книги "; cin >> name; 
	cout << "Введите автора книги  "; cin >> avtor;
	cout << "Введите жанр книги  "; cin >> genre;
	cout << "Введите издательство книги  "; cin >> publishing;
	cout << "Введите год издания книги  ";cin >> year;
}
















