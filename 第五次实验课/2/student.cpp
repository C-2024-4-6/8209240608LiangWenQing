//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
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
