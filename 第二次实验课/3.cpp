#include <iostream>
using namespace std;
int main() {

	while (1) {

		double a, b, c;
		cout << "请输入三角形的三边长度：" << endl;
		cin >> a >> b >> c;

		if (a <= 0 || b <= 0 || c <= 0) {
			cout << "WARNING:边长不能为非正数！！！" << endl;
			continue;
		}

		if (a + b > c && a + c > b && b + c > a) {
			cout << "该三角形的周长为：" << a + b + c << endl;
			if (a == b || b == c || a == c) {
				cout << "该三角形是一个等腰三角形" << endl;
			}
			else {
				cout << "该三角形不是一个等腰三角形" << endl;
			}
		}
		else {
			cout << "该三角形不是一个三角形" << endl;
		}
	}

	system("pause");
	return 0;
}
