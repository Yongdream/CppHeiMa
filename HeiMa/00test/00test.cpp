#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "hello!"; // 包含头文件 字符串是string 字符是char
	bool flag = true;
	cout << "hello world" << endl;
	cout << name << endl;
	cout << sizeof(flag) << endl;

	// do-while 语句 先do后判断
	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 9);

	// 敲7
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7) cout << i << endl;
	}

	// continue 跳出循环中未被执行的语句 进入下一个循环

	// goto 不推荐
	cout << "1.xxx" << endl;
	cout << "2.xxx" << endl;
	goto FLAG;					// 找寻标记
	cout << "3.xxx" << endl;
FLAG:
	cout << "4.xxx" << endl;


	// 输入 cin >>
	int a = 0;
	cin >> a;
	cout << a << endl;

	return 0;
}