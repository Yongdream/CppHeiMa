#include <iostream>
#include <string>

using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

int main() {

	//�ṹ������
	struct student arr[3] =
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};
	student stu1 = { "yz",18,100 };

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name 
			<< " ���䣺" << arr[i].age 
			<< " ������" << arr[i].score << endl;
	}

	// �ṹ��ָ�� p->score��������
	student* p = &stu1;
	cout << p->score << endl;
	cout << stu1.score << endl;

	system("pause");

	return 0;
}
