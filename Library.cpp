#include <iostream>
#include <string>
#include"book.h"
#include"bookk.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 3;
	Book book[size];

	Inputbook(book, size);
	Out_book(book, size);
	Outboook(book, size);
	Redact(book, size);
	Out_book(book, size);



}


