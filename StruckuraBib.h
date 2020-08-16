#pragma once
#include<iostream>
#include<string>

using namespace std;




struct Biblioteka {
	string Name;
	string Avtor;
	string Izdatelstwo;
	string Janr;
	int age;
	void Show();
	void Input();
	void Append(string Name, string Avtor, string Izdatelstwo,
		string Janr, int age);
};

