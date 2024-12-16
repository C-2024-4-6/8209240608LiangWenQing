#include <iostream>
using namespace std;

class Cube {
private:
	double length;
	double width;
	double height;
public:

	void set() {
		cin >> length;
		cin >> width;
		cin >> height;
	}
	double getVolume() {
		return length * width * height;
	}
};

int main() {
	Cube C1, C2, C3;
	cout << "输入第一个长方体的长宽高：" << endl;
	C1.set();
	cout << "输入第二个长方体的长宽高：" << endl;
	C2.set();
	cout << "输入第三个长方体的长宽高：" << endl;
	C3.set();
	cout << "第一个长方体的体积为：" << C1.getVolume() << endl;
	cout << "第二个长方体的体积为：" << C2.getVolume() << endl;
	cout << "第三个长方体的体积为：" << C3.getVolume() << endl;

	system("pause");
	return 0;
}