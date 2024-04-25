#include<iostream>
#include<string>
#include<cstdlib>
#define MAX 1000
using namespace std;
struct Person
{
	string name;
	int age;
	string sex;
	string phone;
	string addr;
};
struct addreassbooks
{
	struct Person personarry[MAX];
	int m_Size;
};
void mainMenu()
{
	cout << "--------------------" << endl;
	cout << "1.������ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
	cout << "--------------------" << endl;
}
void addPerson(addreassbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "��ϵ���������޷����" << endl;
		return;
	}
	string name;
	cout << "����������" << endl;
	cin >> name;
	abs->personarry[abs->m_Size].name = name;
	string sex;
	cout << "�������Ա�" << endl;
	cin >> sex;
	abs->personarry[abs->m_Size].sex = sex;
	int age;
	cout << "����������" << endl;
	cin >> age;
	abs->personarry[abs->m_Size].age = age;
	string phone;
	cout << "������绰" << endl;
	cin >> phone;
	abs->personarry[abs->m_Size].phone = phone;
	string addr;
	cout << "�������ַ" << endl;
	cin >> addr;
	abs->personarry[abs->m_Size].addr = addr;
	//����ͨѶ¼����
	abs->m_Size++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}
void printPerson(addreassbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����\t" << abs->personarry[i].name << endl;
			cout << "�Ա�\t" << abs->personarry[i].sex << endl;
			cout << "����\t" << abs->personarry[i].age << endl;
			cout << "�绰\t" << abs->personarry[i].phone << endl;
			cout << "��ַ\t" << abs->personarry[i].addr << endl;
			cout << "\n";
		}
	}
	system("pause");
	system("cls");
}
int checkPerson(addreassbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personarry[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void deletePerson(addreassbooks* abs)
{
	string dname;
	cout << "��������Ҫɾ��������" << endl;
	cin >> dname;
	int ret = checkPerson(abs, dname);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personarry[i] = abs->personarry[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(addreassbooks* abs)
{
	string fname;
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	cin >> fname;
	int result = checkPerson(abs, fname);
	if (result == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "����\t" << abs->personarry[result].name << endl;
		cout << "�Ա�\t" << abs->personarry[result].sex << endl;
		cout << "����\t" << abs->personarry[result].age << endl;
		cout << "�绰\t" << abs->personarry[result].phone << endl;
		cout << "��ַ\t" << abs->personarry[result].addr << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(addreassbooks* abs)
{
	string mname;
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	cin >> mname;
	int result = checkPerson(abs, mname);
	if (result == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personarry[result].name = name;
		string sex;
		cout << "�������Ա�" << endl;
		cin >> sex;
		abs->personarry[result].sex = sex;
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personarry[result].age = age;
		string phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personarry[result].phone = phone;
		string addr;
		cout << "�������ַ" << endl;
		cin >> addr;
		abs->personarry[result].addr = addr;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(addreassbooks* abs)//�߼����
{
	abs->m_Size = 0;
	cout << "ͨѶ¼��ճɹ���" << endl;
	system("pause");
	system("cls");
}
int main(void)
{

	//����ͨѶ¼�ṹ�����
	addreassbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա�ĸ���
	abs.m_Size = 0;

	int select = 0;
	while (1)
	{
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			printPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
}
