#include <iostream>

using namespace std;

void func0(int a, int = 1) {
    // 第二个int不会被用到
    cout << a << endl;
}

// 函数重载
void func(int a, int = 1) {
    cout << a << endl;
}

void func() {
    cout << "a" << endl;
}

void func1(int& a) {
    cout << "not" << endl;
}
void func1(const int& a) {
    cout << "const" << endl;
}

void func2(int a) {
    cout << "func2" << endl;
}
void func2(int a, int b = 10) {
    cout << "const" << endl;
}

int main() {
	cout << "hello world" << endl;
    // 函数的占位参数
    func0(10, 10);

    // 函数重载
    // -同一个作用域下
    // -函数名相同
    // -函数参数类型不同 或者个数不同 或者顺序不同
    // 注意：函数的返回值不可以作为函数重载的条件
    
    int a = 10;
    
    // -引用作为函数重载条件
    func1(10);
    func1(a);
    
    // -函数重载碰到函数默认参数
    // func2(10);  // error 重载一般不要默认参数了
    return 0;
}