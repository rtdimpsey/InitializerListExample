#pragma once
#include <iostream>
using namespace std;

class X
{
public:
	X() : r(7)   //This will error in C++14
	{
		cout << "X Default Constructor()" << endl;
	};
	X(int i) : a(8), r(a), b{ i }, i(i), j(this->i) 
	{
		cout << "X construtor(int)" << endl; 
	};
	X(int a1, int i, int b, int j) : r(a), a(a1), i(i), b(b), j(j) 
	{
		cout << "X constructor(int, int, int, int)" << endl;
	};
	~X();

//private:
	const int &r;
	int a;
	int i;
	int b;
	int j;
};

