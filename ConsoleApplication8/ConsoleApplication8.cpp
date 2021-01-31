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
	int r;
	cin >> r;
	for (int i = 0; i <= r; i++) {
		cout << kaijo(r) / kaijo(i) / kaijo(r - i) << "x^" << r - i << " y^" << i ;
		if (i != r) {
			cout <<" + ";
		}
	}
}