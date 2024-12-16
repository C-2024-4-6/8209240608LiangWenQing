//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
Student::Student() {
}
Student::Student(int num, const char name[], char sex) {
	this->num = num;
	this->sex = sex;
	int len = strlen(name);
	for (int i = 0; i < len + 1; i++) {
		this->name[i] = name[i];
	}
}

void Student::set_value(int num, const char name[], char sex) {
	this->num = num;
	this->sex = sex;
	int len = strlen(name);
	for (int i = 0; i < len + 1; i++) {
		this->name[i] = name[i];
	}
}
