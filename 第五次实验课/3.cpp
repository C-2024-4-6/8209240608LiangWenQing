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
	cout << "�����һ��������ĳ���ߣ�" << endl;
	C1.set();
	cout << "����ڶ���������ĳ���ߣ�" << endl;
	C2.set();
	cout << "���������������ĳ���ߣ�" << endl;
	C3.set();
	cout << "��һ������������Ϊ��" << C1.getVolume() << endl;
	cout << "�ڶ�������������Ϊ��" << C2.getVolume() << endl;
	cout << "����������������Ϊ��" << C3.getVolume() << endl;

	system("pause");
	return 0;
}