#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "hello!"; // ����ͷ�ļ� �ַ�����string �ַ���char
	bool flag = true;
	cout << "hello world" << endl;
	cout << name << endl;
	cout << sizeof(flag) << endl;

	// do-while ��� ��do���ж�
	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 9);

	// ��7
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7) cout << i << endl;
	}

	// continue ����ѭ����δ��ִ�е���� ������һ��ѭ��

	// goto ���Ƽ�
	cout << "1.xxx" << endl;
	cout << "2.xxx" << endl;
	goto FLAG;					// ��Ѱ���
	cout << "3.xxx" << endl;
FLAG:
	cout << "4.xxx" << endl;


	// ���� cin >>
	int a = 0;
	cin >> a;
	cout << a << endl;

	return 0;
}