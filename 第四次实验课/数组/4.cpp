#include <iostream>
using namespace std;

void bubble_sort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

int main() {

	// 数组1
	int length_1 = 1;
	cout << "Enter list1:";
	cin >> length_1;
	int* arrp1 = new int[length_1];
	for (int i = 0; i < length_1; i++) {
		cin >> arrp1[i];
	}

	// 数组2
	int length_2 = 1;
	cout << "Enter list2:";
	cin >> length_2;
	int* arrp2 = new int[length_2];
	for (int i = 0; i < length_2; i++) {
		cin >> arrp2[i];
	}

	// 融合
	int* sum_arrp = new int[length_1 + length_2];
	for (int i = 0; i < length_1 + length_2; i++) {
		sum_arrp[i] = i < length_1 ? arrp1[i] : arrp2[i-length_1];
	}

	// 排序
	bubble_sort(sum_arrp, length_1 + length_2);

	// 输出
	cout << "The merged list is ";
	for (int i =0 ; i < length_1 + length_2; i++) {
		cout << sum_arrp[i] << " ";
	}
	cout << endl;

	delete[]arrp1;
	delete[]arrp2;
	system("pause");
	return 0;
}