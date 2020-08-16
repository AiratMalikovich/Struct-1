#pragma once

#include<iostream>
#include<string>
#include"StruckuraBib.h"

using namespace std;

void Input(Biblioteka bib[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		bib[i].Input();
	}

}

void Output(Biblioteka bib[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		bib[i].Show();
	}

}
