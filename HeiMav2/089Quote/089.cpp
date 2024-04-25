#include <iostream>

using namespace std;
void swap(int& a, int& b) { // 传入的就是引用了
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int& test01()
{
    int a = 33;
    // 静态变量存放在全局区
    // 全局区的数据在程序结束后系统释放
    return a;
}

int& test02()
{
    static int b = 20; 
    // 静态变量存放在全局区
    // 全局区的数据在程序结束后系统释放
    return b;
}

void test03(const int& q)
{
    cout << q << endl;
}

int main() {
	cout << "***引用 给变量取别名***" << endl;
    // 相同数据类型 &别名 = 原名
    int a = 10;
    int& b = a; // 相同内存空间
    b = 5;
    cout << b << endl;
    int c = 30;

    // -引用必须初始化——告诉它“它是谁的别名”
    // -引用在初始化之后，不可以改变
    // 引用传递 形参也会修饰实参 类似地址传递

    // -本质：在c++内部实现是一个"指针常量"
    swap(a, c);
    cout << a << endl;
    cout << c << endl;

    cout << "***引用返回值***" << endl;
    
    // 不要返回局部变量引用！！
    int& ref01 = test01();
    cout << "ref01: " << ref01 << endl;
    
    test01() = 123;
    cout << "ref01: " << ref01 << endl;
    
    // 用法：函数调用作为左值 ⭐新概念
    int& ref = test02();
    cout << "ref02: " << ref << endl;

    test02() = 123;
    cout << "ref02: " << ref << endl;
    // 理解：函数本身就是一个引用
    // 理解：返回的是a的引用，引用是给变量起别名，所以可以把test02()当做a的别名。
    // 通过别名test02()再取一个别名ref，所以test02（）和ref都可以认为是a的别名

    // ***常量引用***
    // 场景：使用形参 反正误操作
    int qq = 101;
    test03(qq);


    return 0;
}