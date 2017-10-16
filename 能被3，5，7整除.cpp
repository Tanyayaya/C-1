#include <iostream>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
int num=0;
for(int i=3;i<9;i=i+2)
  {if (n%i==0)
    cout<<i<<" ";
    num++;
    }
if (num==0)
  cout << "n" << endl;
else
    cout<<endl;
}
}
