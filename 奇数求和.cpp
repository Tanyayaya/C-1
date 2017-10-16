# include <iostream>
using namespace std;
int main()
{
	int m = 0, n = 0,sum=0;
	cin >> m >> n;
	if (m > n) {
		cout << "ÇëÖØÐÂÊäÈë" << endl;
	}
	else {
		if (m == n) {
			if (m % 2 == 0) {
				sum = 0;
			}
			else {
				sum = m;
			}
		}
		else {
			if (m % 2 == 0) {
				for (int i = m + 1; i <= n; i = i + 2) {
					sum = sum + i;
				}
			}
			else {
				for (int i = m; i <= n; i = i + 2) {
					sum = sum + i;
				}
			}
		}
		cout << sum << endl;
		return 0;

}
}
