//student.h                (这是头文件，在此文件中进行类的声明)
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	Student();
	Student(int num, const char name[], char sex);
	void set_value(int num, const char name[], char sex);
	void display();
private:
	int num;
	char name[20];
	char sex;
};
