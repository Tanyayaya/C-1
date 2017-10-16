#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int a[n], b[n], c[n], d[n],f[n-1];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
		d[i] = c[i] / b[i];
	}
	for (int i = 0; i < n - 1; i++)//至多进行（n-1）次排序
	{
		for (int k = 0; k < n - i; k++)
		{
			if (d[k]>d[k + 1]) {
				int t = d[k];
				d[k] = a[k + 1];
				d[k + 1] = t;
			}
		}
	}
	int numi = 0;
	for (int i = 0; i < n - 1; i++) {
		f[i] = d[i + 1] - d[i];
	}
	for (int i = 0; i<n-1; i++) {
		if (f[i] > f[numi])
			numi = i;
		}
    cout << numi + 1<<endl;
	for (int i = 0; i<numi+1; i++) {

		 cout<< a[i] << endl;

	}
	cout<<(n-numi-1)<<endl;
	for (int i = numi+1; i<n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

