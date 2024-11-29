#include <iostream>
using namespace std;

// 最大公约数
int gcd(int n, int m) {
	if (n % m == 0) return m;
	return gcd(m, n % m);
}

// 最小公倍数
int lcm(int n, int m) {
	return n * m / gcd(n,m);
}

int main() {

	int a, b;
	cout << "输入两个数：" << endl;
	cin >> a >> b;

	cout << "这两个数的最大公约数为：" << gcd(a, b) << endl;
	cout << "这两个数的最小公约数为：" << lcm(a, b) << endl;

	system("pause");
	return 0;
}