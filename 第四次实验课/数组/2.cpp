#include <iostream>
using namespace std;

void bubble_sort(double arr[], int len) {
	bool changed = true;
	for (int i = 0; i < len - 1 && changed == true; i++) {
		changed = false;
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				double t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				changed = true;
			}
		}
	}
}

void printArr(double arr[], int len) {
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << endl;
}

int main() {

	double arr[10];
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter ten numbers:";

	// 输入
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "Before sort:";
	printArr(arr, length);

	// 排序
	bubble_sort(arr, length);

	// 输出
	cout << "After sort:";
	printArr(arr, length);


	system("pause");
	return 0;
}