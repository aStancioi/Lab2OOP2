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
	Complex a(1, 2), b(6, 9), c(4, 20), d(8, 4);
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
	return 0;
}