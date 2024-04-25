#include <iostream>
#include <string>

using namespace std;

// 封装的意义：
// -将属性和行为作为一个整体，表现生活中的事物
// -将 <属性> 和 <行为> 加以 <权限> 控制

// 成员：<属性> 和 <行为>
// <属性>：成员属性 成员变量
// <行为>：成员函数 成员方法

// <权限>
// -public:公共权限——成员类内可以访问，类外可以访问
// -protected:保护权限——成员类内可以访问，类外不可以访问(继承中可以被访问）
// -private:私有权限——成员类内可以访问，类外不可以访问

// struct默认权限为公共public
// class默认权限为私有private


const double PI = 3.14;

class Circle
{
public:         // 权限
    int m_r;    // 半径 属性
    double calcuateZc() {   // 行为
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
        p_name = "张三";
        p_car = "拖拉机";
        p_password = 123456;
    }
protected:
    string p_car;
private:
    int p_password;
};

// 成员属性设置为私有
// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性
// -提供公有方法对私有进行控制
class Person
{
public:
    void setName(string name)   // 设置姓名
    {
        p_name = name;
    }

    string getName()            // 获取姓名
    {
        return p_name;
    }

    int getAge()                // 获取年龄
    {
        return p_age;
    }

    void setAge(int age)        // 设置年龄
    {
        p_age = age;
        if (age < 0 || age >150)    // <有效性验证>
        {
            p_age = 0;
            cout << "什么鬼" << endl;
            return;
        }
    }

    void setLover(string lname) // 设置伙伴
    {
        lover = lname;
    }
private:
    
    string p_name;  // 姓名 可读可写
    string lover;   // 伙伴 只写
    int p_age;      // 年龄 可读+限定范围可写
};




int main() {
	cout << "hello world" << endl;
    Circle c1;  // 创建对象 实例化对象
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