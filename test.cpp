/*读懂题目，留意边界条件。才是快速解题 像这个，0 0这个边界，看意思是要输出，也有不用输出的意思。从AC结果看，不考虑这种过不了*/



/*

//一样的思路，不一样的代码，这个也是可以通过的。 

#include<iostream>
using namespace std;
int main()
{
	int coef;
	int expo;
	cin>>coef>>expo;
	if(expo==0)//如果指数为0，则求导后是0多项式
	{
		cout<<"0 0";
		return 0;
	} 
	else//注意第一次输出的格式 ！ 
	cout<<coef*expo<<' '<<expo-1;
	while(cin>>coef>>expo)//输入直到文件末尾 
	if(expo!=0)//注意如果指数为0，不作输出！ 
	cout<<' '<<coef*expo<<' '<<expo-1;//注意要先输出空格！ 
	return 0;
}



*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n1;int n2;int n;
	int i=0;
	int flag=0;
	while(cin>>n)
	{++i;
	if(i%2==0)
	{n2=n;
	if(n2==0)
	{

		if(!flag) 
		{
			cout<<0<<" "<<0<<endl; 
		return 0;
}
	}else{
		int n3=n1*n2;  /*用你、n1接受结果时，结果不对，可能时编译器的问题吧。没空深究这个东西了。。*/ 
		n2=n2-1;
		if(flag)
		{
			cout<<" "<<n3<<" "<<n2;
		}else{
			cout<<n3<<" "<<n2;
			flag=1;
		}
	}
		
	}
	if(i%2==1)
	{
		n1=n;
	}
		
	}
	cout<<endl;
	return 0;
}
