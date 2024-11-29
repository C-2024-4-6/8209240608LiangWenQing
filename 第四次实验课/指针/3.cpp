#include <iostream>
using namespace std;




void bubbleSort(int arr[], int len) {
	bool isChanged = true;
	for (int i = 0; i < len - 1 && isChanged == true; i++) {
		isChanged = false;
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
			isChanged = true;
		}
	}
}

int main() {

	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	bubbleSort(arr, n);
	for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
	cout << endl;

	delete[] arr;
	system("pause");
	return 0;
}