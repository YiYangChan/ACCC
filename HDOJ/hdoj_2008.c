/*
��ֵͳ��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 99867    Accepted Submission(s): 48360


Problem Description
ͳ�Ƹ�����n�����У���������������ĸ�����


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n=0�����ʾ������������в�������


Output
����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����


Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0


Sample Output
1 2 3
0 0 5


Author
lcy
*/

#include <stdio.h>

int main()
{
        int n, i;
	double x;
	int nn, zr, pn;         /*  negative number, zero, positive number	*/
	
        scanf("%d", &n);
        while (n != 0) {
        	nn = zr = pn = 0;
		for (i = 0; i < n; ++i) {
			scanf("%lf", &x);
			if (x < 0)
				++nn;
			else if (x == 0)
				++zr;
			else if (x > 0)
				++pn;
		}
		printf("%d %d %d\n", nn, zr, pn);
        	scanf("%d", &n);
	}

	return 0;
}

