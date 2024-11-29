#include <iostream>
using namespace std;

int main() {

	int arr1[10];
	int arr2[10];
	cout << "Enter ten numbers:";

	// 输入
	for (int i = 0; i < 10; i++) {
		cin >> arr2[i];
	}

	// 存入
	int j = 1;
	arr1[0] = arr2[0];

	for (int i = 1; i < 10; i++) {
		for (int k = 0; k < j; k++) {
			if (arr2[i] == arr1[k]) break;
			else if (k == j - 1) {
				arr1[j] = arr2[i];
				j++;
			}
		}
	}

	// 输出
	cout << "The distinct numbers are:";
	for (int i = 0; i < j; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;

}
