#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double temperature_F, temperature_C;
	cout << "请输入一个华氏温度:";
	cin >> temperature_F;
	temperature_C = (temperature_F - 32) * 5 / 9;
	cout << "这个华氏温度对应的摄氏温度约为:" << fixed << setprecision(2) << temperature_C << endl;

	system("pause");
	return 0;
}