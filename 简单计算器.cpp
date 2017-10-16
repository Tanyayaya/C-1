#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    char c=0;
    cin>>a>>b>>c;
    if(c=='+')
        cout<<a+b;
    else if(c=='-')
       cout<<a-b;
    else if(c=='*')
        cout<<a*b;
    else if(c=='/'&&b!=0)
        cout<<a/b;
    else if(c=='/'&&b==0)
        cout<<"Divided by zero!";
    else
        cout<<"Invalid operator!";
    return 0;
}
