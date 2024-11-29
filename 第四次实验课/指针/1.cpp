#include <iostream>
using namespace std;


int indexof(const char* s1, const char* s2) {
	for (int i = 0; s2[i] != '\0'; i++) {
		for (int j = 0; s1[j] == s2[i + j]; j++) {
			if (s1[j + 1] == '\0') {
				return i;
			}
		}
	}
	return -1;
}


int main() {

	char string_1[100], string_2[100];
	cout << "Enter the first string:";
	cin.getline(string_1, 100);

	cout << "Enter the second string:";
	cin.getline(string_2, 100);

	cout << "indexOf(\"" << string_1 << "\",\"" << string_2 << "\") is " << indexof(string_1, string_2) << endl;

	system("pause");
	return 0;
}

