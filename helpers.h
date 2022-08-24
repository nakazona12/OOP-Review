#ifndef HELPERS_H_INCLUDED
#define HELPERS_H_INCLUDED
#include <string>
using namespace std;

class Helpers
{
	char* word;
	int number;
public:
	Helpers()
	{
		word = nullptr;
		number = 0;
	}
	void dynamic();
	void getint();
	operator bool() const;
	operator int()const;
	operator double() const;
	~Helpers()
	{
		if (word != nullptr)
		{
			delete[] word;
		}
	}
};

#endif
