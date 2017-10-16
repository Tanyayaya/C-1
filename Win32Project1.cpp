#include <iostream>
using namespace std;
int main() {
	char sentence[500]={0};
	int num[500] = {0};
	cin.getline(sentence, 500);
	int numk = 1;
	for (int i = 0; i < 500; i++) {
		if (sentence[i] == ' '){
			num[numk] = i;
			numk++;}
        if (sentence[i]=='.'){
            num[numk] = i;
            break;
            }
	}
    int max = num[1];
	int beforemax = -1;
	int aftermax = num[1];
	for (int i = 1; i <numk+1 ; i++) {
            if (num[i + 1] - num[i] - 1 > max) {
			   max = num[i + 1] - num[i] - 1;
			   beforemax = num[i];
			   aftermax = num[i + 1];

        }

	}
	for (int i = beforemax + 1; i < aftermax; i++) {
		cout<<sentence[i];
	}
}
