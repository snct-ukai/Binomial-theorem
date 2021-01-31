#include<iostream>
using namespace std;

int kaijo(int a) {
	int x = 1;
	for (int i = 1; i <= a; i++) {
		x *= i;
	}
	return x;
}

int main(void) {
	int s;
	cin >> s;
	const int r = s;
	int a = 0;
	int b = 0;
	for (int i = 0; i <= r; i++) {
		cout << kaijo(r) / kaijo(i) / kaijo(r - i) << "x^" << r - 1 << " y^" << i ;
		if (i != r) {
			cout <<" + ";
		}
	}
}