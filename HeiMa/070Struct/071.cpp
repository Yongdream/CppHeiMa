#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct Hero
{
	string name;
	int age;
	string categories;
};

void bSort(struct Hero* &heroArry, int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			Hero temp;
			if (heroArry[j].age > heroArry[j + 1].age)
			{
				temp = heroArry[j];
				heroArry[j] = heroArry[j + 1];
				heroArry[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	struct Hero heroArry[5] =
	{
		{"南欣",20,"火"},
		{"东杉",24,"木"},
		{"北淼",23,"水"},
		{"中坤",18,"土"},
		{"西昭",22,"金"},
	};
	int len = sizeof(heroArry) / sizeof(heroArry[0]);
	Hero* p = heroArry;

	bSort(p, len);
	for (int i = 0; i < len; i++)
	{
		cout << heroArry[i].name << '\t'
			<< heroArry[i].age << '\t'
			<< heroArry[i].categories << endl;
	}
	system("pause");
	return 0;
}
