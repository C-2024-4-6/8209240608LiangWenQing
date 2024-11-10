#include <iostream>
using namespace std;

int main() {

	char letter;
	cout << "输入一个字符:";
	cin >> letter;

	// 小写字符检测
	if (97 <= letter && letter <= 122) {
		letter -= 32;
		cout << "你输入的为小写字母，该字母大写后为：" << letter << endl;
	}
	else {
		cout << "你输入道的为非小写字母，该字符的后继字符的ASCII码值为" << (int)letter + 1 << endl;
	}

	system("pause");
	return 0;

}