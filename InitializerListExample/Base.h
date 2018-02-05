#pragma once
#include <iostream>
using namespace std;
class Base
{
public:
	Base() : n(7) 
	{
		cout << "Base Default Constructor" << endl;
	};
	Base(int n) : n(n) 
	{
		cout << "Base Constructor()" << endl;
	};
	~Base();

//private:
	int n;
};

