#include <iostream>
using namespace std;

int main() {

	double price = 0.8, aver;
	int buy, num, day;
	
	for (num = 0, day = 1, buy = 2; num <= 100; day++, buy = 2 * buy) {
		num = num + buy;
	}

	aver = num * price / day;
	cout << "平均价钱为" << aver << endl;

	system("pause");
	return 0;
}
