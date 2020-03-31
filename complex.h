#pragma once
#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
	double real;
	double imaginar;

public:
	//constructor
	Complex(double r, double i);
	//returns the real part of the number
	double getreal() const;
	//returns the imaginary part of the number
	double getimg() const;
	
	//setter
	void set_real(double real_value);
	void set_img(double img_value);
	
	//operatii aritmetice
	complex add(complex other);
	complex mul(complex other);
	complex quot(complex other);
	
	//absoluten Betrag
	double abs();
	
	//returns a complex number
	void show_compl();
	//displays the exponential form of a complex number
	string show_exp();
	//returns the polar form of a complex number
	string compute_polar();
};
