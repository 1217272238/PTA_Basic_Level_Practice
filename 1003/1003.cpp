//������ã�Pǰ��ֻ����A

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		size_t p = s.find_first_not_of('A'); // �ҵ���һ������A��λ��
		if (p == string::npos || s[p] != 'P') //���ȫ��A�������һ��A�ĺ��治��P����𰸴���
		{
			cout << "NO" << endl;
			continue;
		}
		size_t t = s.find_first_not_of('A', p + 1); // ��p+1λ�ÿ�ʼ�Ҳ���A��λ�ã���ʵ������T��λ��
		if (t == string::npos || s[t] != 'T' || t == p + 1)//���һ������A����һ�������ڣ����߲���T������P����ֱ�Ӿ���T���𰸴���
		{
			cout << "NO" << endl;
			continue;
		}
		size_t m = s.find_first_not_of('A', t + 1);// Ϊ���ж�T�����м���A��
		if (m != string::npos) // ���T���治ȫ��A����𰸴���
		{
			cout << "NO" << endl;
			continue;
		}
		if ((s.length() - 1 - t) == p * (t - p - 1)) //T����A�ĸ��� ���� Pǰ��A�ĸ��� �� P��T֮��A�ĸ�����һ�����������жϣ�
		{                                            
			cout << "YES" << endl;
			continue;
		}
		else
		{
			cout << "NO" << endl;
			continue;
		}
	}

	return 0;
}