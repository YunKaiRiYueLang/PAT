/*1013 数素数 (20 分)*/
/*每逢格式，都要犹豫一下。事实上，遇到犹豫的特殊点，单独拉出来判断就行了，直接了当。电脑处理，除非逻辑上的改进。单纯多想10分钟在格式上少一行代码，没意义。*/
/*NM 小于10000 */
/*难度不高，就是格式输出的时候，有一个坑点。只有一个坑点20分。 25分一般有两个到三个不容易注意到的坑点。*/
#include<iostream>
#include<math.h>
using namespace std;

bool isprimer(int i)
{
	for(int j=2;j<=sqrt(i);j++)
	{
		if(i%j==0) return false;
	}
	
	//cout<<"素数"<<i<<endl;
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
	
//	cout<<"s、第2个"<<p[2]<<endl;
	for(int i=M-1;i<N;i++)
	{
		if((i-M+1)==0) {cout<<p[i];continue;}
		if((i-M+1)%10==0)	{cout<<endl;cout<<p[i];continue;}
		if((i-M+1)%10!=0)	{cout<<" "<<p[i];}
		
		
	}
	return 0;
 } 
