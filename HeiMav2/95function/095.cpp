#include <iostream>

using namespace std;

void func0(int a, int = 1) {
    // �ڶ���int���ᱻ�õ�
    cout << a << endl;
}

// ��������
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
    // ������ռλ����
    func0(10, 10);

    // ��������
    // -ͬһ����������
    // -��������ͬ
    // -�����������Ͳ�ͬ ���߸�����ͬ ����˳��ͬ
    // ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
    
    int a = 10;
    
    // -������Ϊ������������
    func1(10);
    func1(a);
    
    // -����������������Ĭ�ϲ���
    // func2(10);  // error ����һ�㲻ҪĬ�ϲ�����
    return 0;
}