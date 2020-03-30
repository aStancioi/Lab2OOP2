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
	Complex(double r, double i);
	double getreal() const;
	double getimg() const;
	void show_compl();
	void show_exp();
	void compute_polar();
};
