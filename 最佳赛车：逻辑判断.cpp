
#include <iostream>
using namespace std;
int main() {
//a�Ǵ����ĸ�����
	int a[4] = { 0,0,0,0 };
//b��������ר��
	bool b[4] = { 'A','B','C','D ' };
//������ֻ��һ��ר��˵�Ե�����£��Ƿ����ֻ��һ���������
	int num = 0;
	int best = 0;
	int right = 0;
	char c[4] = { 'A','B','C','D ' };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//b[j]=0����λר��˵���ˣ�Ϊһ��Ϊ˵����
                        if (j != i)
                            b[j] = 0;
			else
				b[j] = 1;
                        //��ʾÿλר�ҵ����ۣ�����Ӧ����������ѵģ���λ��ֵΪ1������Ϊ0��Ĭ��Ϊ0��
			if (b[0] == 1)
				a[1] = 1;
			if (b[1] == 1)
				a[3] = 1;
			if (b[2] == 1)
				a[2] = 0;
			if (b[3] == 1)
				a[3] = 0;
                        //��¼���������
			for (int m = 0; m < 4; m++) {
				if (a[m] = 1) {
					num++;
					int best = m;
				}
			}
                        //�ҵ�����������ר�Һ�
			if (num == 1) {
				int right = i;
				goto breakLoop;
			}
		}
	}
//�����ѳ����ź�˵�Ե�ר��
breakLoop:    cout << best + 1 << endl;
	      cout << c[right] << endl;
	return 0;
}

	        