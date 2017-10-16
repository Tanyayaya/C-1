#include <iomanip>
#include <iostream>
using namespace std;
int main() {

	int a[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
        {
		for (int j = 0; j < 5; j++)
		{
			cin>> a[i][j];
		}
	}
	int m = 0, n = 0;
	cin >> n >> m ;
	if (m > 4 || m < 0 || n > 4 || n < 0)
    {
	    cout << "error" << endl;
	    return 0;
	}
	else
        {
		int temp = 0;
        for (int i = 0; i < 5; i++)
        {
            temp= a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = temp;
		}
		for (int i = 0; i < 5; i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout << setw(4) << a[i][j];
                }
                    cout<<endl;
			}
	}

	return 0;
}
