#include <iostream>
#include "helpers.h"
using namespace std;

void Helpers::dynamic()
{
	if (word == nullptr)
	{
		word = new char[25];
	}
	cin.getline(word, strlen(word));
	cout << word<<'\n';
}
void Helpers::getint()
{
	cin >> number;
	cout << '\n';
}
Helpers::operator bool() const
{
	bool flag = false;
	if (number != 0)
	{
		flag = true;
	}
	return flag;
}
Helpers::operator int()const
{
	int add=2+2;
	return add;
}
