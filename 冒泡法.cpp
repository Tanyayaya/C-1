// 冒泡法.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;
int main()
{
	int n = 1,i=0,k=0,t=0,g=0;
	int a[1000];
	cout <<"请输入数组所包含的数字个数" <<endl;
	cin >> n;
	cout << "请输入数组" << endl;
	for (i = 0; i < n; i++) //输入待排序数组
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)//至多进行（n-1）次排序
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

