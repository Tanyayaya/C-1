#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    double a[n][2]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    double temp=0,max=0;
    for(int j=0;j<n-1;j++)
    {
            for(int k=j+1;k<n;k++)
            {
                  temp=sqrt((a[j][0]-a[k][0])*(a[j][0]-a[k][0])+(a[j][1]-a[k][1])*(a[j][1]-a[k][1]));

               if (temp > max)
                {
                     max = temp;
                }
             }
    }
    cout<<fixed<<setprecision(4)<<max<<endl;
    return 0;
    }

