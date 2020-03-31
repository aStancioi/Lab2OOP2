#define NDEBUG
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <math.h>
#include "complex.h"

using namespace std;

int main()
{
	string k,l;
	Complex a(1, 7), b(6, 9), c(5, 20), d(3, 4);
	Complex vector[] = { a, b, c, d };

	for (int i = 0; i < 4; i++) 
	{
		vector[i].show_compl();
		cout << endl;
		cout << "exponential : ";
		vector[i].show_exp();
		cout << endl;
		cout << "polar : ";
		vector[i].compute_polar();
		cout << endl;
	}
	
	k = a.show_exp();
	l = a.compute_polar();
	assert(k = "1 * e^ ( + 0.463648  * 2)");
	assert(l = "z = 1 * (cos0.463648 + isin0.463648)");
	
	//Sort nach absoluten Betrag
	
	assert(d.abs() == 5)
		
	cout << "\nSort nach abs Betrag: ";
	for (int i = 0; i < 4; i++) {
		for (int j = i+1; i < 3; i++) {
			if (vector[i].abs() > vector[i+1].abs()){
				complex aux = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = aux;
			}
		}
	}
	
	for(int i = 0; i < 4; i++) {
		cout << vector[i].abs()  << " ";
	}
	
	//Gesammtsumme der Reihe
	complex s(0, 0);
	for (int i = 0; i < 4; i++) {
		s = s.add(vector[i]);
	}

	cout << "\nSumme: " << s.getreal()<< " " << s.getimg();
	
	assert(s.getreal() == 15);
	assert(s.getimg() == 40);
}
