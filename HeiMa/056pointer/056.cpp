#include <iostream>

using namespace std;

int main() {
	cout << "hello world" << endl;
    int a = 10;
    int* p = &a;
    cout << p << endl;
    cout << &a << endl;
    cout << *p << endl; // 解指针
    cout << sizeof(p) << endl;  
    // 指针恒定空间大小 4个字节-32位系统 8字节-64位系统

    // 空指针
    // 用于初始化 不可访问
    // 0-255 的内存编号系统占用 不可访问
    int* po = NULL;

    // 野指针 也是不可访问的
    int* py = (int*)0x1100;


    // ⭐const修饰指针 
    int a1 = 10;
    int b1 = 20;

    // 常量指针：指针的指向可以修改 但是值不能修改
    const int* p1 = &a1;
    p1 = &b1;
    // 指针常量：指针的指向不可以修改 但是值能修改
    int* const p2 = &a1;
    *p2 = 20;
    // 指针的指向不可以修改 但是值也不能修改
    const int* const p3 = &a1;



    return 0;
}