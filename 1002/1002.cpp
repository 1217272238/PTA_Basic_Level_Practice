#include<iostream>
using namespace std;

int main()
{
	string pinyin[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	string N;

	cin >> N;
	int length = N.length();
	int sum = 0;
	while (length)
	{
		sum += (N[--length] - '0');  //在ASCII中字符与'0'字符的差值为对应的数字
	}

	char sumChar[3];
	int sumIndex = 0;
	while (sum)
	{
		sumChar[sumIndex++] = sum % 10;  //存放的数字为逆序的
		sum /= 10;
	}

	for (int i = sumIndex - 1; i >= 0; i--) {
		cout << pinyin[sumChar[i]];
		if (i != 0)
			cout << " ";
	}

	return 0;
}