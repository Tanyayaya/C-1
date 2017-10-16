
#include <iostream>
using namespace std;
int main() {
//a是代表四个赛车
	int a[4] = { 0,0,0,0 };
//b代表四名专家
	bool b[4] = { 'A','B','C','D ' };
//检验在只有一名专家说对的情况下，是否符合只有一款赛车最佳
	int num = 0;
	int best = 0;
	int right = 0;
	char c[4] = { 'A','B','C','D ' };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//b[j]=0即该位专家说错了，为一即为说对了
                        if (j != i)
                            b[j] = 0;
			else
				b[j] = 1;
                        //表示每位专家的评论，当对应的赛车是最佳的，该位数值为1，否则为0（默认为0）
			if (b[0] == 1)
				a[1] = 1;
			if (b[1] == 1)
				a[3] = 1;
			if (b[2] == 1)
				a[2] = 0;
			if (b[3] == 1)
				a[3] = 0;
                        //记录最佳赛车号
			for (int m = 0; m < 4; m++) {
				if (a[m] = 1) {
					num++;
					int best = m;
				}
			}
                        //找到符合条件的专家号
			if (num == 1) {
				int right = i;
				goto breakLoop;
			}
		}
	}
//输出最佳车车号和说对的专家
breakLoop:    cout << best + 1 << endl;
	      cout << c[right] << endl;
	return 0;
}

	        