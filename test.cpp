/*������Ŀ������߽����������ǿ��ٽ��� �������0 0����߽磬����˼��Ҫ�����Ҳ�в����������˼����AC����������������ֹ�����*/



/*

//һ����˼·����һ���Ĵ��룬���Ҳ�ǿ���ͨ���ġ� 

#include<iostream>
using namespace std;
int main()
{
	int coef;
	int expo;
	cin>>coef>>expo;
	if(expo==0)//���ָ��Ϊ0�����󵼺���0����ʽ
	{
		cout<<"0 0";
		return 0;
	} 
	else//ע���һ������ĸ�ʽ �� 
	cout<<coef*expo<<' '<<expo-1;
	while(cin>>coef>>expo)//����ֱ���ļ�ĩβ 
	if(expo!=0)//ע�����ָ��Ϊ0����������� 
	cout<<' '<<coef*expo<<' '<<expo-1;//ע��Ҫ������ո� 
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
		int n3=n1*n2;  /*���㡢n1���ܽ��ʱ��������ԣ�����ʱ������������ɡ�û�����������ˡ���*/ 
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
