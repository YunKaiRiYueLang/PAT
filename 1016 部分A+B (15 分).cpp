/*1016 ����A+B (15 ��)*/
/*15�ֵ��⣬û���߼��ϵĿӵ㡣�����ر�����߽�������Ҳû�������ʽ��֪���ַ� ascii�����ˡ�*/
#include<iostream>

using namespace std;

int main ()
{
string A;string B;
int DA=0;int DB=0;
int PA=0;int PB=0; 
cin>>A>>DA>>B>>DB;
	 for(int i=0;i<A.size();i++)
	 {
	 	if(A[i]-'0'==DA){PA=PA*10+DA;}
	 }
	 for(int j=0;j<B.size();j++)
	 {
	 	if(B[j]-'0'==DB){PB=PB*10+DB;}
	 }
	 
	 cout<<PA+PB<<endl;
	 return 0;
}
