#include<iostream>
#include<algorithm>
using namespace std;

struct stu
{
	char name[11]; //��������λ����һ��Ҳ����Ҫ�����ļ���β���
	char no[11];
	int score;
};

bool cmp(stu a, stu b) // ��stu�ṹ�尴��score����
{
	return a.score < b.score; //��С����
}
int main()
{
	int n;
	cin >> n;
	stu* stus = new stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stus[i].name >> stus[i].no >> stus[i].score;
	}
	sort(stus, stus + n, cmp);

	cout << stus[n - 1].name << " " << stus[n - 1].no << endl;
	cout << stus[0].name << " " << stus[0].no << endl;

	delete[] stus;
	return 0;
}