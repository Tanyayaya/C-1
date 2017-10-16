#include <iostream>
using namespace std;
int main() {
	char a[80];
	int numa = 0;
	int nume = 0;
	int numi = 0;
	int numo = 0;
	int numu = 0;
	cin.getline(a, 80);
	for (int i = 0; i < 80; i++) {
		switch (a[i]) {
		case 'a':numa++; break;
		case 'e':nume++; break;
		case 'i':numi++; break;
		case 'o':numo++; break;
		case 'u':numu++; break;
		}
	}
	cout << numa << " " << nume << " " << numi << " " << numo << " " << numu << endl;
}
