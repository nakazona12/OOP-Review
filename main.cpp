#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "helpers.h"


using namespace std;
int main()
{
	Helpers hlprs;
	cout << "Enter a sentence: ";
	hlprs.dynamic();
	cout << "Enter an Integer: ";
	hlprs.getint();
	if(hlprs)
	{
		cout << "True";
	}
	else if (!hlprs)
	{
		cout << "False";
	}
	int convert = hlprs;
	cout << convert;

	return 0;
}
