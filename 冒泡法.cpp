// ð�ݷ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
using namespace std;
int main()
{
	int n = 1,i=0,k=0,t=0,g=0;
	int a[1000];
	cout <<"���������������������ָ���" <<endl;
	cin >> n;
	cout << "����������" << endl;
	for (i = 0; i < n; i++) //�������������
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)//������У�n-1��������
	{
		for (k = 0; k < n - i; k++)
		{
			if (a[k]>a[k + 1]){
				t = a[k];
			    a[k] = a[k + 1];
				a[k + 1] = t; }
        }
	}
    for (i=0;i<n;i++){
    cout<<a[i]<<endl;}
    return 0;
}

