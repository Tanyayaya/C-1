# include <iostream>
using namespace std;
int main()
{
	//输入待排序数组
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	//分为奇数偶数两个数组
	int b[10], c[10];
	int oddnum = 0, evenum = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i]%2 == 0) {
			b[evenum] = a[i];
			evenum++;
			}
		else {
			c[oddnum] = a[i];
			oddnum++;
		    }
	}

	//用冒泡法进行排序
	for (int j = 0; j < evenum; j++) {
		for (int i = 0; i <(evenum-j-1); i++) {
			if(b[i]>b[i+1]){
				int k = b[i];
				b[i] = b[i + 1];
				b[i + 1] = k;

			}
		}
	}
	for (int j = 0; j < oddnum; j++) {
		for (int i = 0; i <  (oddnum- j-1); i++) {
			if (c[i]>c[i + 1]) {
				int k = c[i];
				c[i] = c[i + 1];
				c[i + 1] = k;

			}
		}
	}
	//输出数组
	for (int i = 0; i < oddnum; i++) {
		cout << c[i];
	}
	for (int i = 0; i < evenum; i++) {
		cout << b[i];
	}
	return 0;
}
