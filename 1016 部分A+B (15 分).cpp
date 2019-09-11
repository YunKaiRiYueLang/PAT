/*1016 部分A+B (15 分)*/
/*15分的题，没有逻辑上的坑点。不用特别在意边界条件。也没有输出格式。知道字符 ascii就行了。*/
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
