#pragma once
#include <iostream>
using namespace std;

class Foo
{
public:
	Foo() : a('a'), y(13)
	{
		cout << "Foo Default Constructor" << endl;
	};
	Foo(char a, int x) : a(a), x(x), y(13)
	{
		cout << "Foo Constructor(char, int))" << endl;
	};
	Foo(int x) : Foo('a', x)
	{
		cout << "Foo Constructor(int)" << endl;
	};
	Foo(int x, int y) : Foo('a', x)
	{
		cout << "Foo Constructor (int, int)" << endl;
	}

	//getters-Setters
	int getX() const;
	int getY() const;
	char getA() const;

	//Overloaded Operators
	ostream& printFoo(ostream &outStream) const;
	~Foo();

//private:
	int x;
	int y;
	char a;
};
ostream& operator<<(ostream &, const Foo &);




