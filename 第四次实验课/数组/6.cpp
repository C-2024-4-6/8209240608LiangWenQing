#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		if ('a' < s[i] && s[i] < 'z') counts[s[i] - 'a']++;
		if ('A' < s[i] && s[i] < 'Z') counts[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0)cout << (char)(i + 'a') << ": " << counts[i] << " times" << endl;
	}

}

int main() {

	char string_1[100];
	int counts[26];
	for (int i = 0; i < 26; i++)counts[i] = 0;

	cout << "Enter a string:";
	cin.getline(string_1, 100);
	count(string_1,counts);

	system("pause");
	return 0;
}