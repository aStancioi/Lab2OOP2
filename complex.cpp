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
//setter real
void complex::set_real(double real_value) {
	// ocuparea partii reale
	// param : a_value
	real = real_value;
}
//setter imaginar
void complex::set_img(double img_value) {
	// ocuparea partii imaginare
	// param : img_value
	imaginar = img_value;
}

complex complex::add(complex other) {
	// returneaza suma a doua numere complexe
	complex auxiliar;

	auxiliar.set_real(this->getreal() + other.getreal());
	auxiliar.set_img(this->getimg() + other.getimg());

	return auxiliar;
}

complex complex::mul(complex other) {
	// returneaza inmultirea a doua numere complexe
	complex auxiliar;

	auxiliar.set_real(this->getreal() * other.getreal() - this->getimg() * other.getimg());
	auxiliar.set_img(this->getimg() * other.getimg() + this->getreal() * other.getimg());

	return auxiliar;
}

complex complex::quot(complex other) {
	// returneaza impartirea a doua numere complexe
	complex auxiliar;
	double div = this->getimg() * this->getimg() + other.getimg() * other.getimg();
	auxiliar.set_real(
		(this->getreal() * other.getreal() + this->getimg() * other.getimg()) / div);
	auxiliar.set_img(
		(this->getimg() * other.getimg() - this->getreal() * other.getimg()) / div);
	
	return auxiliar;
}

double complex::abs() {
	// returneaza modulul unui numar complex
	double result;

	result = sqrt(this->getreal() * this->getreal() + this->getimg() * this->getimg());

	return result;
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
