// InitializerListExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "X.h"
#include "Foo.h"
#include "MyClass.h"
using namespace std;

struct S
{
	int n;
	S(int n);
	S();
};
S::S() : n(7) 
{
	cout << "S Default Constructor" << endl;
}
S::S(int x) : n(x) 
{
	cout << "S Constructor(int)" << endl;
}


int main()
{
	S s1;
	S s2(5);
	cout << s1.n << s2.n << endl;

	X x1;
	X x2(3);
	cout << x2.a << x2.b << x2.i << x2.j << x2.r << endl;
	x2.a = 7;
	cout << x2.a << x2.b << x2.i << x2.j << x2.r << endl;
//	x2.r = x2.b;   r is constant so it cannot be assigned

	Foo f1;
	Foo f2(2);
	Foo f3('b', 7);
	Foo f4(5, 6);
	cout << f1;
	f1.printFoo(cout);
	f2.printFoo(cout);
	f3.printFoo(cout);
	f4.printFoo(cout);

	MyClass m1;
	MyClass m2(1.2);
	MyClass m3(6);
    return 0;
}

