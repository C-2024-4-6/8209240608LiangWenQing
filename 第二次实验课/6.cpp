#include <iostream>
using namespace std;

int main() {
	int a, b;
	int t = 1;
	cout << "请输入两个整数：" << endl;
	cin >> a >> b;

	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			t = i;
		}
	}

	cout << "最大公约数为：" << t << endl;
	cout << "最小公倍数为：" << a * b / t << endl;

	system("pause");
	return 0;
}
