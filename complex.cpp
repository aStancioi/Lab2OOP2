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
//returns the real part of the number
{
	return real;
}

double Complex::getimg() const
//returns the imaginary part of the number
{
	return imaginar;
}

void Complex::show_compl()
//returns a complex number
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

void Complex::show_exp()
//displays the exponential form of a complex number
{
	int t;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	cout << r << " * e^" << "(" << t << " * i)";
}

void Complex::compute_polar()
//displays the polar form of a complex number
{
	int t;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	cout << "z = " << r << " * (cos" << t << " + isin" << t << ")";
}
