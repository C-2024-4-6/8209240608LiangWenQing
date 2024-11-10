#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出

	// 按8进制输出
	cout << endl << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出

	// 关于将一个实数转换为int，观察结果
	double num;
	cout << "请输入一个实数：";
	cin >> num;
	cout << "这个实数转换为int整型后的结果为" << dec << (int)num << endl;

	system("pause");
	return 0;
}