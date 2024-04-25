#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher {
    string name;
    struct Student sArry[5];
};

void inPutInformation(struct Teacher tArry[], int len)
{
	string Name = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArry[i].name = "Teacher_";
		tArry[i].name += Name[i];
		for (int j = 0; j < 5; j++)
		{
			tArry[i].sArry[j].name = "Student_";
			tArry[i].sArry[j].name += Name[j];
			int random = rand() % 60 + 40;	// rand() % 60��ʾ����0-60�����
			tArry[i].sArry[j].score = random;
			random = rand() % 10 + 15;
			tArry[i].sArry[j].age = random;
		}
	}
}
void printInformation(struct Teacher tArry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������" << tArry[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ����������" << tArry[i].sArry[j].name
				 << "\t���Է�����" << tArry[i].sArry[j].score
				 << "\tѧ�����䣺" << tArry[i].sArry[j].age << endl;
		}
	}
}
int main2(void)
{
	srand((unsigned int)time(NULL));	// �������
	struct Teacher tArry[3];
	int len = sizeof(tArry) / sizeof(tArry[0]);

	inPutInformation(tArry, len);
	printInformation(tArry, len);

	system("pause");
	return 0;
}