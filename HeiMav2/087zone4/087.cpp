#include <iostream>

using namespace std;

// 不要返回局部变量的地址！！
// 形参数据保存在栈区
int* func(int b) {
    b = 100;
    int a = 10; // 局部变量
    return &a;  // error!
}



// -new的基本语法
int* fun_dui()
{
    // 利用new关键字 可以将数据开辟到堆区
    // new返回一个地址给*p 即该数据的指针给到
    int* p = new int(10);
    return p;
}

void test01()
{
    int* p1 = fun_dui();
    cout << *p1 << endl;
    // 释放堆区数据
    delete p1;
}
// -在堆区利用new开辟数组
void test02()
{
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 2;
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
    delete[] arr; // ⭐释放数组要加上[]!!!!
}


int main() {
	cout << "hello world" << endl;

    int* p = func(1);
    cout << *p << endl;

    // 堆区数据有developer开辟释放
    // 堆区数据利用new关键字开辟内存
    int* p1 = fun_dui();
    cout << *p1 << endl;

    return 0;
}