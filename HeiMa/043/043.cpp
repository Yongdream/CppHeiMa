#include <iostream>
using namespace std;

int main() {
	cout << "hello world" << endl;
	int arr[5] = { 1, 2, 3, 4, 5 };
	// ͨ���������鿴�����׵�ַ
	cout << arr << endl;
	// ��һ��Ԫ�صĵ�ַ �� ������׵�ַ��һ�µ�
	cout << &arr[0] << endl;
	cout << &arr[1] << endl; // ÿ��intռ���ĸ��ֽ�
    return 0;
}