#include <iostream>
#include <string>

using namespace std;

//结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main() {

	//结构体数组
	struct student arr[3] =
	{
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	};
	student stu1 = { "yz",18,100 };

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name 
			<< " 年龄：" << arr[i].age 
			<< " 分数：" << arr[i].score << endl;
	}

	// 结构体指针 p->score访问属性
	student* p = &stu1;
	cout << p->score << endl;
	cout << stu1.score << endl;

	system("pause");

	return 0;
}
