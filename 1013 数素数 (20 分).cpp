/*1013 ������ (20 ��)*/
/*ÿ���ʽ����Ҫ��ԥһ�¡���ʵ�ϣ�������ԥ������㣬�����������жϾ����ˣ�ֱ���˵������Դ��������߼��ϵĸĽ�����������10�����ڸ�ʽ����һ�д��룬û���塣*/
/*NM С��10000 */
/*�ѶȲ��ߣ����Ǹ�ʽ�����ʱ����һ���ӵ㡣ֻ��һ���ӵ�20�֡� 25��һ��������������������ע�⵽�Ŀӵ㡣*/
#include<iostream>
#include<math.h>
using namespace std;

bool isprimer(int i)
{
	for(int j=2;j<=sqrt(i);j++)
	{
		if(i%j==0) return false;
	}
	
	//cout<<"����"<<i<<endl;
	return true;
}

int main()
{
	int M=0;int N=0;
	cin>>M>>N;
	double *p=new double[N];
	for(int i=0;i<N;i++)
	{
		p[i]=0;
		
	 } 
	 int index=0;int i=2;
	while(index<N)
	{
		if(isprimer(i)) {p[index]=i;index++;}
		++i;
		 
	}
	
//	cout<<"s����2��"<<p[2]<<endl;
	for(int i=M-1;i<N;i++)
	{
		if((i-M+1)==0) {cout<<p[i];continue;}
		if((i-M+1)%10==0)	{cout<<endl;cout<<p[i];continue;}
		if((i-M+1)%10!=0)	{cout<<" "<<p[i];}
		
		
	}
	return 0;
 } 
