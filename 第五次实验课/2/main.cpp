//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student stud1(007, "tcg", 'm');
	stud1.display();
	stud.set_value(006, "CSU", 'f');
	stud.display();              //ִ��stud�����display����
	return 0;
}
