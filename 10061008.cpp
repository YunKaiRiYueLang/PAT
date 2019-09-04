#include<iostream>

using namespace std;

int main()
{

#if 0

	/*1006换个格式输出整数*/
	/*看到题目直接写的,无参考.取整,取余方法,连续输出,不刷新缓冲区,cin读入*/
	/*网上有其他方法,都差不多*/

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
	/*1008 数组元素循环右移问题*/
	/*也是直接写的.需要知道的东西:空格换行符,终止cin读入.数组需要静态常量声明,可用指针避过*/
	/*题目陷阱:需要通过取余获得真的偏移量,需要正确设置空格的位置,new与delete*/
	int M; int N; 
	cin >> N >> M;
	int* p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	int trans = M % N;//获取真正的偏移
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
		if (trans == 0&&i==0)/*if成功后,会提供一个循环出口*/
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

	/*网上的另一个解法 三次reverse,再pat中允许用algorithm和stl*/
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

		M = M % N;//防止M大于N的情况出现，导致地址访问出错

		//算法关键
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
