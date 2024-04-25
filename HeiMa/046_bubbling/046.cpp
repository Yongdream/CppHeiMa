#include <iostream>
using namespace std;

int main() {
	cout << "hello world" << endl;
	int arr[9] = { 1, 4, 2, 8, 0, 5, 7, 6, 3 };
	for (int i = 0; i < size(arr)-1; ++i) {
		for (int j = 0; j < size(arr) - i - 1; ++j) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size(arr); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;


	// ¶şÎ¬Êı×é


    return 0;
}