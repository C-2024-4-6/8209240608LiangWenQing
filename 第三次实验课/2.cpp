#include <iostream>
using namespace std;

bool is_prime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main_302() {

	for (int i = 0, j = 2, k = 0; i < 200; j++) {
		if (is_prime(j) == 1) {
			cout << j << "	";
			i++;
			k++;
			if (k % 10 == 0) {
				cout << endl;
			}
		}
	}

	system("pause");
	return 0;
}