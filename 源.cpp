#include<iostream>

using namespace std;

int main()
{

#if 0

	/*1006������ʽ�������*/
	/*������Ŀֱ��д��,�޲ο�.ȡ��,ȡ�෽��,�������,��ˢ�»�����,cin����*/
	/*��������������,�����*/

	int value=1000;
	cin >> value;
	for (int i = 0; i < value / 100; i++)
	{
		cout << 'B';
	}
	value = value % 100;
	for (int i = 0; i < value / 10; i++)
	{
		cout << 'S';
	}
	value = value % 10;
	for (int i = 1; i <= value; i++)
	{
		cout << i;
	}
	//cout<<endl;
	//system("pause");
	return 0;

#endif // 0

#if 0
	/*1008 ����Ԫ��ѭ����������*/
	/*Ҳ��ֱ��д��.��Ҫ֪���Ķ���:�ո��з�,��ֹcin����.������Ҫ��̬��������,����ָ��ܹ�*/
	/*��Ŀ����:��Ҫͨ��ȡ�������ƫ����,��Ҫ��ȷ���ÿո��λ��,new��delete*/
	int M; int N; 
	cin >> N >> M;
	int* p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	int trans = M % N;//��ȡ������ƫ��
	for (int i = N-trans; i != N; i++)
	{
		cout << p[i];
		if (i != N - 1)
		{
			cout << " ";
		}
	}
	for (int i = 0; i < N - trans; i++)
	{
		if (trans == 0&&i==0)/*if�ɹ���,���ṩһ��ѭ������*/
		{
			cout << p[i];
			continue;
		}
		cout << " " << p[i];
	}
	delete[] p;
	system("pause");
#endif

#if 0

	/*���ϵ���һ���ⷨ ����reverse,��pat��������algorithm��stl*/
#include<iostream>
#include<list>
#include<algorithm>

	using namespace std;

	int main()
	{
		int N, M, t;

		cin >> N >> M;

		int *p = new int[N];

		for (int i = 0; i < N; i++)
			cin >> p[i];

		M = M % N;//��ֹM����N��������֣����µ�ַ���ʳ���

		//�㷨�ؼ�
		reverse(p, p + N - M);
		reverse(p + N - M, p + N);
		reverse(p, p + N);

		for (int i = 0; i < N; i++)
		{
			if (i == 0)
				cout << p[0];
			else
				cout << " " << p[i];
		}

		delete[] p;

		return 0;
	}
#endif
}