#pragma once
#include "Base.h"
#include <mutex>
#include <fstream>
class MyClass : public Base
{
public:
	MyClass() : MyClass(0.0)
	{
		cout << "MyClass Default Constructor" << endl;
	}
	MyClass(int x) : Base(132), x(x), y{ 0 }, lg(m), m{}, f1{"test.cc", std::ios::app}, f2("test.bin", std::ios::binary | std::ios::app)
	{
		cout << "MyClass Constructor(int)" << endl;
	};
	MyClass(double a) : Base(0), y(a + 1), x(y), lg(m)
	{
		// x will be initialized before y, its value here is indeterminate
		cout << "MyClass Constructor(double)" << endl;
	};
		
	~MyClass();

//private
	unsigned char x;
	unsigned char y;
	mutex m;
	lock_guard<mutex> lg;
	fstream f1;
	fstream f2;
};

