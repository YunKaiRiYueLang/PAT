/*1004  �ɼ�����*/
/*����һ���ṹ���飬��ȡ��ʱ��Ƚ�һ�£�����ָ��λ�þ��С�Ȼ���ո�ʽ�����*/
/*���ûɶ߯��ġ���Ϊ����������λ�����ڴ洢�����Сֵ������ѭ����n��ֵ��ѡȡҪע�⡣*/
/*�����й��ڶ�ֵ���߳�����ע�ͣ��Ƿǳ��б�Ҫ�ġ�̫���׳����ˡ���������ѭ����*/
#include<iostream>

using namespace std;

struct Student
{
int sorce;
string name;
string seri; 
};

int main()
{
int n=0;
cin>>n;
Student *p;
p=new Student[n+2];
p[0].sorce=0;
p[1].sorce=100;

for(int i=2;i<=n+1;i++)
{
cin>>p[i].name;
cin>>p[i].seri;
cin>>p[i].sorce;
if(p[i].sorce>=p[0].sorce)
{
p[0].sorce=p[i].sorce;
p[0].name=p[i].name;
p[0].seri=p[i].seri;                      
}
if(p[i].sorce<=p[1].sorce)
{
  p[1].sorce=p[i].sorce;
  p[1].name=p[i].name;
  p[1].seri=p[i].seri;                      
 }
}
cout<<p[0].name<<" "<<p[0].seri<<endl; 
cout<<p[1].name<<" "<<p[1].seri<<endl; 
return 0;
}
