#include <iostream>
#include <string>

using namespace std;

// ��װ�����壺
// -�����Ժ���Ϊ��Ϊһ�����壬���������е�����
// -�� <����> �� <��Ϊ> ���� <Ȩ��> ����

// ��Ա��<����> �� <��Ϊ>
// <����>����Ա���� ��Ա����
// <��Ϊ>����Ա���� ��Ա����

// <Ȩ��>
// -public:����Ȩ�ޡ�����Ա���ڿ��Է��ʣ�������Է���
// -protected:����Ȩ�ޡ�����Ա���ڿ��Է��ʣ����ⲻ���Է���(�̳��п��Ա����ʣ�
// -private:˽��Ȩ�ޡ�����Ա���ڿ��Է��ʣ����ⲻ���Է���

// structĬ��Ȩ��Ϊ����public
// classĬ��Ȩ��Ϊ˽��private


const double PI = 3.14;

class Circle
{
public:         // Ȩ��
    int m_r;    // �뾶 ����
    double calcuateZc() {   // ��Ϊ
        return 2 * PI * m_r;
    }
};

class Stu
{
public:
    string stu_name;
    int stu_id;

    void showName() {
        cout << stu_name << endl;
    }
    void showId() {
        cout << stu_id << endl;
    }
    void setName(string name) {
        stu_name = name;
    }
    void setId(int id) {
        stu_id = id;
    }

private:



};

class Person00
{
public:
    string p_name;
    void funcshow()
    {
        p_name = "����";
        p_car = "������";
        p_password = 123456;
    }
protected:
    string p_car;
private:
    int p_password;
};

// ��Ա��������Ϊ˽��
// �ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
// �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
// -�ṩ���з�����˽�н��п���
class Person
{
public:
    void setName(string name)   // ��������
    {
        p_name = name;
    }

    string getName()            // ��ȡ����
    {
        return p_name;
    }

    int getAge()                // ��ȡ����
    {
        return p_age;
    }

    void setAge(int age)        // ��������
    {
        p_age = age;
        if (age < 0 || age >150)    // <��Ч����֤>
        {
            p_age = 0;
            cout << "ʲô��" << endl;
            return;
        }
    }

    void setLover(string lname) // ���û��
    {
        lover = lname;
    }
private:
    
    string p_name;  // ���� �ɶ���д
    string lover;   // ��� ֻд
    int p_age;      // ���� �ɶ�+�޶���Χ��д
};




int main() {
	cout << "hello world" << endl;
    Circle c1;  // �������� ʵ��������
    c1.m_r = 20;
    double zc = c1.calcuateZc();
    cout << zc << endl;

    Stu stu_1;
    stu_1.stu_name = "yz";
    stu_1.stu_id = 222040202;
    stu_1.showName();
    stu_1.showId();
    stu_1.setName("ysz");
    stu_1.showName();
    return 0;
}