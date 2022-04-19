#include <iostream>
#include <cmath>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	double s, m, m1, r, p, n;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter s: ";
	cin >> s;
	cout << "Enter n: ";
	cin >> n;
	m1 = 0;
	if ((n > 0) && (m > 0) && (s > 0)) {
		for (p = 1; m1 < m; p++)
		{
			r = p / 100;
			m1 = (s * r * (pow((1 + r), n))) / (12 * ((pow((1 + r), n)) - 1));
			if (m1 > m) {
				cout << "p = " << p << endl;
			}
		}
	}
	else {
		cout << "error";
	}
	return 0;
}