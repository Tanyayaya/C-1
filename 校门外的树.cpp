#include <iostream>
using namespace std;
int main()
{
    int L = 0, M = 0;
    cin >> L >> M;
    int sample[10001]={0};
    for (int i = 0; i < L+1; i++)
    {
        sample[i] = 1;
    }
    for (int i = 0; i < M; i++)
    {
        int s = 0, e = 0;
        cin >> s >> e;
        for (int j = s; j <= e; j++)
        {
            sample[j] = 0;
        }
    }
    int num=0;
    for (int i = 0; i < L+1; i++)
    {
       num=num+sample[i];
    }
    cout << num << endl;
    return 0;
}
