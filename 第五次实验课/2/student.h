//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	Student();
	Student(int num, const char name[], char sex);
	void set_value(int num, const char name[], char sex);
	void display();
private:
	int num;
	char name[20];
	char sex;
};
