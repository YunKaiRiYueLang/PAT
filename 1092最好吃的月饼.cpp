/*1091��óԵ��±�*/
/*�Ƚϼ򵥣�ֱ��д�������ˡ�Ҫ�������ٶȣ�����Ҫע�������ʽ�ͱ߽�������*/

#include<iostream>
using namespace std;
int maxnum(int *p,const int N)
{
    int max=0;
    for(int i=0;i< N;i++)
    {
     if(max<p[i]) max=p[i];
    }
    return max;
} 

int main()
{
    int N;int M;
    cin>>N;cin>>M;
    int *p=new int[N];
    for(int i=0;i<N;i++)
    {
            p[i]=0;
    }
    for(int i=1;i<=M;i++)
    {
    for(int j=0;j<N;j++)
    {
    int q;cin>>q;p[j]+=q;
    
    }
    } 
    
    int max;max=maxnum(p,N);
    cout<<max<<endl;
    bool first=true;
    for(int i=1;i<=N;i++)
    {
    if(p[i-1]==max) 
    {
                    if(first) {cout<<i;first=false;}
                    else{cout<<" "<<i;}
    }}
    cout<<endl;
    system("pause");
    return 0; 
} 
 
