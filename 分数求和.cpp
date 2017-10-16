#include <iostream>
using namespace std;
int main() {
	int n = 0, q = 1, p = 1;
	cin >> n;
	int x[n], y[n];
	long mul = 1;
	char a='/';
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cin >>a;
		cin >>y[i];
	}
	for (int i = 0; i < n; i++) {
	     if(mul<2e9)
		    mul = mul*y[i];
         if (mul>=2e9)
            goto breakLoop;}
breakLoop:
    {mul=1;
    for (int i = 1; i < n; i = i + 1)
		{for (int j = 1; j < n; j = j + 1){
			if(y[j]%i==0)
              for (int m = 1; m < n; m = m + 1){
                if(y[m]%i==0&&m!=j)
                    y[j]=y[j]/i;
                    y[m]=y[m]/i;
            }
		}
    }
    for (int i = 1; i < n; i = i + 1)
		{for (int j = 0; j < n; j++) {
			if (y[i]%y[j]==0&&i!=j)
				y[j]=y[i];
				x[j]=x[j]*(y[i]/y[j]);
		}
    }
    for (int j = 1; j < n;  j= j + 1){
        if(mul%y[j]!=0)
           mul=mul*y[j];
    }
}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + (mul / y[i]) * x[i];
	}
	while(sum % 2 == 0 && mul % 2 == 0) {
			sum = sum / 2;
            mul = mul / 2;
	}
	if (sum % 2 == 0 && mul % 2 != 0) {
		if (mul = 1)
			cout <<sum<< endl;
		else
			cout <<sum<<a<<mul<< endl;
	}
	if (sum % 2 != 0 && mul % 2 == 0)
		cout << sum<<a<<mul << endl;
	if (sum % 2 != 0 && mul % 2 != 0) {
		for (int i = 1; i < (sum + 1); i = i + 2)
		{
			if (sum%i == 0 & mul%i == 0)
				sum = sum / i;
			    mul = mul / i;
			    i = 1;
		}
		if (mul == 1)
			cout << sum<< endl;
		else
			cout << sum <<a<<mul<< endl;
	}



	return 0;
}
