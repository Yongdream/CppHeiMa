#include <iostream>

using namespace std;

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bSort(int* arr, int arrLen)
{
	for (int i = 0; i < arrLen - 1; ++i) {
		for (int j = 0; j < arrLen - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	cout << "hello world" << endl;

	int arr[9] = { 1, 4, 2, 8, 0, 5, 7, 6, 3 };
	int len = size(arr);
	bSort(arr, len);

	for (int i = 0; i < size(arr); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int a = 10;
	int b = 5;
	// 值传递不会改变实参的值
	// 地址传递可以改变实参的值
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}