#include <iostream>
using namespace std;

int main() {

	bool arr[100];

	// init
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}

	// 操作
	for (int id = 0; id < 100; id++) {
		for (int i = id; i < 100; i += id + 1) {
			arr[i] = (arr[i] == 1) ? 0 : 1;
		}
	}

	// 结果
	cout << "打开的储物柜有：";
	for (int i = 0; i < 100; i++) if (arr[i] == 1) cout << i + 1 << " ";
	cout << endl;

	system("pause");
	return 0;
}