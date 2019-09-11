/*直接撸就完事了，没啥难度。知道stack string iostream 干嘛，就能很快做出这个*/
/*getline不忽略空格读取一行*/
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
