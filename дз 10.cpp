// дз 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Header.h"
#include"StruckuraBib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE=10 ;
	Biblioteka bib[SIZE]{};
	Input(bib, SIZE);
	Output(bib, SIZE);
	system("pause");
	


}

