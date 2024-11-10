#include <iostream>
using namespace std;

int main() {

	double x, y;

	while (1) {
		cout << "X = ";
		cin >> x;

		if (0 < x && x < 1) {
			y = 3 - 2 * x;
		}
		else if (1 <= x && x < 5) {
			y = 2 / (4 * x) + 1;
		}
		else if (5 <= x && x < 10) {
			y = x * x;
		}
		else {
			cout << "非法输入或输入X值未在定义域内" << endl;
			break;
		}
		cout << "Y = " << y << endl;
	}

	system("pause");
	return 0;

}