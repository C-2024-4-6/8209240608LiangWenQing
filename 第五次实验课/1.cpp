#include<iostream>
using namespace std;
class Time	// 定义Time类
{
private:	// 私有
	int hour;
	int minute;
	int sec;
public:
	void cinHour() {
		cin >> hour;
	}
	void cinMinute() {
		cin >> minute;
	}
	void cinSec() {
		cin >> sec;
	}
	void printHour() {
		cout << hour << " ：" << minute << " ：" << sec << endl;

	}
};
int main()
{
	Time t1;           // 定义t1为Time类对象
	// 输入设定的时间 
	t1.cinHour();
	t1.cinMinute();
	t1.cinSec();
	// 输出
	t1.printHour();
	return 0;
}
