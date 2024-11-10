#include <iostream>
using namespace std;

int main() {

    char c;
    int letter = 0, space = 0, digit = 0, other = 0;

    cout << "请输入一行字符：" << endl;
    cin >> c;

    while (cin.get(c)) {

        if (isalpha(c)) {
            letter++;
        }
        else if (isspace(c)) {
            space++;
        }
        else if (isdigit(c)) {
            digit++;
        }
        else {
            other++;
        }
        if (c == '\n') {
            break;
        }

    }

    cout << "其中英文字母个数: " << letter << endl;
    cout << "其中空格个数: " << space << endl;
    cout << "其中数字个数: " << digit << endl;
    cout << "其中其他字符个数: " << other << endl;

    system("pause");
    return 0;
}
