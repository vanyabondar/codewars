#include <string>

using namespace std;

string decomp(int n) {
	int *a = new int[n + 1];
	int i, j, m;
	for (i = 2; i <= n; i++)
		a[i] = 0;
	for (i = 2; i <= n; i++) {
		m = i;
		j = 2;
		while (m != 1) {
			if (m % j == 0) {
				a[j] ++;
				m /= j;
			}
			else {
				j++;
			}
		}
	}

	string s;
	if (a[2] == 1) {
		s = "2";
	}
	else if (a[2] > 1) {
		s = "2^" + to_string(a[2]);
	}


	for (i = 3; i <= n; i++) {
		if (a[i] == 1) {
			s = s + " * " + to_string(i);
		}
		else if (a[i] > 1) {
			s = s + " * " + to_string(i) + "^" + to_string(a[i]);
		}
	}

	return s;

	delete[] a;
}


