#include <iostream>
#include <string>
#include <math.h>
#include "Complex.h"


Complex::Complex(double a, double b)
//constructor
{
	real = a;
	imaginar = b;
}

double Complex::getreal() const
{
	return real;
}

double Complex::getimg() const
{
	return imaginar;
}

void Complex::show_compl()
{
	double r, i;
	r = this->getreal();
	i = this->getimg();
	if (i == 0)
		cout << "The number " << r << " is not a complex number";
	else
		if (i < 0)
			cout << r << " " << i << " " << "i";
		else
			cout << r << " + " << i << "i";
}

string Complex::show_exp()
{
	float t;
	string s;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	s = to_string(r) + " * e^" + "(" + to_string(t) + " * i)";
	return s;
}

string Complex::compute_polar()
{
	float t;
	string s;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	s = "z = " + to_string(r) + " * (cos" + to_string(t) + " + isin" + to_string(t) + ")";
	return s;
}
