/*ֱ��ߣ�������ˣ�ûɶ�Ѷȡ�֪��stack string iostream ������ܺܿ��������*/
/*getline�����Կո��ȡһ��*/
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<char> pstr;
    string str;
    getline(cin,str);
   // cout<<str<<endl;
    for(int i=str.size()-1;i>=0;--i)
    {
            if(str[i]!=' ')
              { 
              
              pstr.push(str[i]);        
              //cout<<pstr.top()<<endl;
              }
              if(!pstr.empty()&&str[i]==' ')
              {
                  while(!pstr.empty())
                   {
                       char c=pstr.top();
                       pstr.pop();
                       cout<<c;           
                   }
                   cout<<" ";     
            } 
    }
    while(!pstr.empty())
    {
        char c=pstr.top();
        pstr.pop();
        cout<<c;
    }
    
    system("pause");
    return 0;
}
