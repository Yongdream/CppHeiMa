#include <iostream>
using namespace std;

int main() {
	cout << "hello world" << endl;
	int arr[5] = { 1, 2, 3, 4, 5 };
	// 通过数组名查看数组首地址
	cout << arr << endl;
	// 第一个元素的地址 和 数组的首地址是一致的
	cout << &arr[0] << endl;
	cout << &arr[1] << endl; // 每个int占用四个字节
    return 0;
}