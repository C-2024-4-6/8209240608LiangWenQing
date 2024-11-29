#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
	int sum = 0;
	for (int i = 0; hexString[i] != '\0'; i++) {
		sum *= 16;
		if ('A' <= hexString[i] && hexString[i] <= 'Z') sum += hexString[i] - 'A' + 10;
		if ('0' <= hexString[i] && hexString[i] <= '9') sum += hexString[i] - '0';
	}
	return sum;
}

int main() {

	char string_1[100];
	cin.getline(string_1, 100);
	cout << parseHex(string_1) << endl;

	system("pause");
	return 0;
}