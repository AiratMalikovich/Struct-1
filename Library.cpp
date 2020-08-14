#include <iostream>
#include <string>
#include"book.h"
#include"bookk.h"

using namespace std;

int main()
{
	const int size = 3;
	Book book[size];
	int menu;
	int menu_ex;
	bool menu_filt=false;
	bool exit = false;

	Inputbook(book, size);
	do
	{
		do
		{
			menu = 0;
			menu_filt = false;

			cout << "\n\tviberite deistvie: 1-Filtr / 2-Redaktirovanie / 3- Pechat' \n" << endl;
			cin >> menu;
			system("cls");
			switch (menu)
			{
			case 1:
				Outboook(book, size);
				break;
			case 2:
				Redact(book, size);
				break;
			case 3:
				Out_book(book, size);
				break;
			default:
				cout << "\nNepravilnii znacheniay, povtori vvod ";
				menu_filt = true;
			};
		} while (menu_filt);

		cout << "\n\tDlay vibora deistviay vvedi-1 / Dlay vihoda vvedi-2 \n";
		cin>>menu_ex;
		system("cls");
		(menu_ex == 1)?  menu = true : menu = false;
	} while (menu);

}


	