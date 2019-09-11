/*1012 数字分类 (20 分)*/
/*边界 小数。*/
/*DEVC++ tdmgcc 4.9.2 32 release int默认初始化不是0。才发现。编译器差别还是所有c 和c++编译器都有这个差别*/

#include<iostream>
#include<iomanip>/*cout输出的格式化函数。这个不太常用啊。*/

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
//	if(m4!=0)	{cout<<setprecision(2)<<m3average<<" ";}else{cout<<"N"<<" ";} // 用这个的话，跑不通，答案错误。 具体问题。看不到。 
	if(m4!=0)	{printf("%.1f ",m3average);}else{cout<<"N"<<" ";}//这个可以跑通。真要时没逻辑问题，就是 
	if(m5!=0)	{cout<<m5<<endl;}else{cout<<"N"<<endl;}
	return 0;
	
} 
