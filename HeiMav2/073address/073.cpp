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
	cout << "1.增加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
	cout << "--------------------" << endl;
}
void addPerson(addreassbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "联系人已满，无法添加" << endl;
		return;
	}
	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	abs->personarry[abs->m_Size].name = name;
	string sex;
	cout << "请输入性别" << endl;
	cin >> sex;
	abs->personarry[abs->m_Size].sex = sex;
	int age;
	cout << "请输入年龄" << endl;
	cin >> age;
	abs->personarry[abs->m_Size].age = age;
	string phone;
	cout << "请输入电话" << endl;
	cin >> phone;
	abs->personarry[abs->m_Size].phone = phone;
	string addr;
	cout << "请输入地址" << endl;
	cin >> addr;
	abs->personarry[abs->m_Size].addr = addr;
	//更新通讯录人数
	abs->m_Size++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}
void printPerson(addreassbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名\t" << abs->personarry[i].name << endl;
			cout << "性别\t" << abs->personarry[i].sex << endl;
			cout << "年龄\t" << abs->personarry[i].age << endl;
			cout << "电话\t" << abs->personarry[i].phone << endl;
			cout << "地址\t" << abs->personarry[i].addr << endl;
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
	cout << "请输入你要删除的人名" << endl;
	cin >> dname;
	int ret = checkPerson(abs, dname);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personarry[i] = abs->personarry[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(addreassbooks* abs)
{
	string fname;
	cout << "请输入要查找的联系人姓名" << endl;
	cin >> fname;
	int result = checkPerson(abs, fname);
	if (result == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名\t" << abs->personarry[result].name << endl;
		cout << "性别\t" << abs->personarry[result].sex << endl;
		cout << "年龄\t" << abs->personarry[result].age << endl;
		cout << "电话\t" << abs->personarry[result].phone << endl;
		cout << "地址\t" << abs->personarry[result].addr << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(addreassbooks* abs)
{
	string mname;
	cout << "请输入要修改的联系人姓名" << endl;
	cin >> mname;
	int result = checkPerson(abs, mname);
	if (result == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personarry[result].name = name;
		string sex;
		cout << "请输入性别" << endl;
		cin >> sex;
		abs->personarry[result].sex = sex;
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personarry[result].age = age;
		string phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		abs->personarry[result].phone = phone;
		string addr;
		cout << "请输入地址" << endl;
		cin >> addr;
		abs->personarry[result].addr = addr;
		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(addreassbooks* abs)//逻辑清空
{
	abs->m_Size = 0;
	cout << "通讯录清空成功！" << endl;
	system("pause");
	system("cls");
}
int main(void)
{

	//创建通讯录结构体变量
	addreassbooks abs;
	//初始化通讯录中当前人员的个数
	abs.m_Size = 0;

	int select = 0;
	while (1)
	{
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			printPerson(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
}
