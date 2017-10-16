#include<iostream>
using namespace std;
int main(){
int N=0;
while(cin>>N&&N!=0){
    int a[N]={0};
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int medi=0;
    if (N%2==0)
    {
        for(int i=0;i<N/2+1;i++)
        {
            for(int j=0;j<N-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    medi=(a[N/2-1]+a[N/2])/2;
    }
    else
    {
        for(int i=0;i<(N+1)/2;i++)
        {
            for(int j=0;j<N-i;j++)
            {
                  if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    medi=a[(N+1)/2-1];
    }
      cout<<medi<<endl;
}
return 0;
}
