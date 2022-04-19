#include <iostream>
#include <cmath>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	double s, p, n, m, r;
	cout << "Enter S: ";
	cin >> s;
	cout << "Enter p: ";
	cin >> p;
	cout << "Enter n: ";
	cin >> n;
	r = p / 100;
	if ((n > 0) && (s > 0) && (p > 0)) {
		m = (s * r * (pow((1 + r), n))) / (12 * ((pow((1 + r), n)) - 1));
		cout << "m = " << m << endl;
	}
	else {
		cout << "error";
	}
	return 0;
}

