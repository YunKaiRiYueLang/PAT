#include<iostream>
#include<string>/*������ͷ�ļ��Ļ�,��vs���޷�ʹ��>>����д��string*/
/*�����Ŀ,�����������no*/
/*����2����Ҫ,����������ȷ������.����3������2���������.*/

using namespace std;

/*���p t��һ�γ��ֵ�λ�� 0 - SIZE-1*/
void getpposition(const string str, const char pt,  int &pp)
{
	pp = 0;
	for (auto c : str)
	{
		if (c == pt) return;
		++pp;
	}
	pp = -1;
	return;
}
#if 1



int main()
{

	const int maxtestnum = 10;/*������ַ����������ֵ*/
	int size = 0;
	cin >> size;/*size  1-9*/
	string teststring[maxtestnum];
	for (int i = 0; i < size; i++)
	{
		cin >> teststring[i];
	}
	/*����������ַ����Ƿ�����������*/
	string a; string b; string c; string x;/*�����ַ�abcx*/
	int pposition; int tposition; int aposition;
	for (int strindex=0;strindex<size;strindex++)
	{
		int numberofp = 0; int numberofa = 0; int numberoft=0;
		string str = teststring[strindex];
		if (str.size() == 0)
		{
			cout << "NO" << endl;
			continue;
		}
		getpposition(str, 'P', pposition);
		getpposition(str, 'A', aposition);
		getpposition(str, 'T', tposition);
		for (auto ct : str)
		{
			if (ct == 'P') ++numberofp;
			if (ct == 'A') ++numberofa;
			if (ct == 'T') ++numberoft;
		}
	/*	if (numberofa == 0 || numberofp != 1 || numberoft != 1)
		{
			cout << "NO" << endl;
			continue;
		}*/
		
		if (pposition < 0 || aposition < 0 || tposition < 0)/*�ṩһ����������*/
		{
			cout << "NO" << endl;
			continue;
		}
		int key = 0;
		for (auto c : str)
		{
			/*����1,����һ���ִ���*/
			if (c != 'P'&&c != 'A'&&c != 'T')/*�ṩһ��ѭ������*/
			{
				cout << "NO" << endl;
				break;
			}
			else
			{
				key = 1;
			}
			
			/*������*/
		}
		if (key==1&&tposition > (pposition + 1) && tposition > aposition)
		{
			
			for (int m = pposition + 1; m < tposition; m++)
			{
				if (str[m] != 'A')
				{
					cout << "NO" << endl;
					key = 0;
					break;
				}
				else {
					key = 1;
				}
			}
			if (key == 0)
				continue;
			if (key==1&&(str.size() - 1 - tposition) == (tposition - pposition - 1)*(pposition))
			{
				cout << "YES" << endl;
				continue;
			}
			else {
				cout << "NO" << endl;
				continue;
			}
		}
		cout << "NO" << endl;/*  ���˼���Сʱ,���������.������߼�û���κ�����. ����Ļ�,���Ǵ��űʼǺ�һЩ.����ע��������һ����.��������,��ͼ,����Ը����߼������ʱ��,�е��õ�.��˵,����ɶ�߼�����*/

	}
	return 0;
	

}

#endif // 0
#if 0
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include<cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <cctype>
using namespace std;
typedef unsigned long long ull;
#define INF 0xfffffff



int main()
{
	int x, y, a, b, c, q, w, e, ok;
	string s1;
	cin >> x;
	while (x--)
	{
		y = q = w = e = ok = 0;
		cin >> s1;
		for (int i = 0; i < s1.size(); ++i)
		{
			if (s1[i] != 'P'&&s1[i] != 'A'&&s1[i] != 'T')
			{
				y = 0;
				ok = 1;
				break;
			}
			if (s1[i] == 'P')
			{
				++q;
				a = i;
			}
			if (s1[i] == 'T')
			{
				++w;
				b = i - a - 1;
			}
			if (s1[i] == 'A')
			{
				++e;
			}
		}
		c = s1.size() - a - b - 2;
		if (a*b == c)
			y = 1;
		if (q != 1 || w != 1 || e == 0)
			ok = 1;
		if (!ok&&y)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
#endif // 1
