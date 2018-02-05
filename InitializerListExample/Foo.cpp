#include "stdafx.h"
#include "Foo.h"

ostream& operator<<(ostream &outStream, const Foo &rhs)
{
	outStream << rhs.getA() << rhs.getX() << rhs.getY() << endl;
	return outStream;
}

int Foo::getX() const
{
	return x;
}

int Foo::getY() const
{
	return y;
}

char Foo::getA() const
{
	return a;
}

ostream& Foo::printFoo(ostream & outStream) const
{
	outStream << a << x << y << endl;
	return outStream;
}

Foo::~Foo()
{
}
