/*1012 ���ַ��� (20 ��)*/
/*�߽� С����*/
/*DEVC++ tdmgcc 4.9.2 32 release intĬ�ϳ�ʼ������0���ŷ��֡����������������c ��c++����������������*/

#include<iostream>
#include<iomanip>/*cout����ĸ�ʽ�������������̫���ð���*/

using namespace std;

int main(){
	int N;
	int M;
	int m1=0;int m2=0;int m3=0;int m4=0;int m5=0;
	int m2flag=-1;int m4num=0;int m2count=0;
	//cout<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>M;
		if(M%5==0)	{if(M%2==0) {m1=m1+M;}continue;}
		if(M%5==1)	{m2flag=m2flag*(-1);m2count++;	m2=m2+m2flag*M;continue;}
		if(M%5==2)	{m3++;continue;}
		if(M%5==3)	{m4=m4+M;++m4num;continue;}
		if(M%5==4)	{if(M>m5)	m5=M;continue;}
	}
	double m3average=0;
	if(m4num>0) {m3average=(double)m4/(double)m4num;}
	
	if(m1!=0)	{cout<<m1<<" ";}else{cout<<"N"<<" ";}
	if(m2count!=0)	{cout<<m2<<" ";}else{cout<<"N"<<" ";}
	if(m3!=0)	{cout<<m3<<" ";}else{cout<<"N"<<" ";}
//	if(m4!=0)	{cout<<setprecision(2)<<m3average<<" ";}else{cout<<"N"<<" ";} // ������Ļ����ܲ�ͨ���𰸴��� �������⡣�������� 
	if(m4!=0)	{printf("%.1f ",m3average);}else{cout<<"N"<<" ";}//���������ͨ����Ҫʱû�߼����⣬���� 
	if(m5!=0)	{cout<<m5<<endl;}else{cout<<"N"<<endl;}
	return 0;
	
} 
