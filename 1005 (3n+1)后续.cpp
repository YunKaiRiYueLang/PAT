/*��Ϊ��Ŀ����1001�Ļ�����д��.û���ظ�����.�Լ�Ҳû����,����Ϊ�ǲ�ȥ������Ŀ,�����˲���ʱ��*/
/*�Ѷ�,��ûʲô�Ѷ�.ע��߽������,��������.*/
#include<iostream>

using namespace std;

int main()
{
	int size = 0;
	cin >> size;
	int key[101] = {};
	int *p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
		key[p[i]] = 1;
	}
	
	for (int i = 0; i < size; i++)
	{
		while (p[i] != 1)
		{
			if (p[i] % 2 != 0)
			{
				p[i] = 3 * p[i] + 1;
				if (p[i] <= 100)	key[p[i]] = 0;
			}
			else
			{
				p[i] = p[i] / 2;
				if (p[i] <= 100)	key[p[i]] = 0;
			}
		}
	}
	int index = 0;
	for (int i = 0; i <= 100; i++)
	{
		index = index + key[i];
	}
	if (index > 0)
	{
		for (int i = 100; i > 1; --i)
		{
			if (key[i] == 1)
			{
				if (index > 1)
				{
					cout  << i<<" ";
				}
				else
				{
					cout << i << endl;
					break;
				}
				index--;
			}
		}
	}
	return 0;
}