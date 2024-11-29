#include <iostream>
using namespace std;

int work_05(int num,int day) {
	if (day > 1) {
		day--;
		return work_05((num + 1) * 2,day);
	}
	else return num;
}

int main() {
	cout << "共摘："<< work_05(1,10) << endl;
	system("pause");
	return 0;
}