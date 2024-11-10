#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a;
	cout << "请输入a的赋值" << endl;
	while (1) {
		cin >> a;
		if (a < 0) {
			cout << "请输入正数！" << endl;
			continue;
		}
		break;
	}

	double an = a;
	double an1;

	while (1) {
		an1 = (an + a / an) / 2;
		if (abs(an1 - an) < 1e-5) {
			break;
		}
		an = an1;
	}

	cout << "a的平方根为" << fixed << setprecision(5) << an << endl;
	system("pause");
	return 0;
}
