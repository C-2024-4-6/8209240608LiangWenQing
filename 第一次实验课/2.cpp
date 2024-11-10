#include <iostream>
using namespace std;

int main() {

	const double pi = 3.14;
	double r, h;
	
	cout << "请输入圆锥的半径：";
	cin >> r;
	cout << "请输入圆锥的锥高：";
	cin >> h;
	cout << "这个圆锥的体积约为：" << r * r * h * pi / 3 << endl;

	system("pause");
	return 0;

}