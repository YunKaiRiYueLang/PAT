/*1004  成绩排名*/
/*建立一个结构数组，读取的时候比较一下，存入指定位置就行。然后按照格式输出。*/
/*这个没啥忒别的。因为有两个额外位置用于存储最大最小值，所以循环中n数值的选取要注意。*/
/*程序中关于定值或者常量的注释，是非常有必要的。太容易出错了。尤其是在循环中*/
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
