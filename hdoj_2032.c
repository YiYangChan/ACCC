/*
�������

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 66699    Accepted Submission(s): 27604


Problem Description
���ǵ���ѧʱ��ѧ������������𣿾���Ķ������ﲻ������������Բο����µ�ͼ�Σ�
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1


Input
�������ݰ����������ʵ����ÿ������ʵ��������ֻ����һ��������n��1<=n<=30������ʾ��Ҫ�����������ǵĲ�����


Output
��Ӧ��ÿһ�����룬�������Ӧ������������ǣ�ÿһ�������֮����һ���ո������ÿһ��������Ǻ����һ�����С�


Sample Input
2 3


Sample Output
1
1 1

1
1 1
1 2 1


Author
lcy
*/
#include <stdio.h>

int main()
{
	int n;

	while (scanf("%d", &n) == 1) {
		int a[n][n];
		int i, j;

		for (i = 0; i < n; ++i)
			a[i][0] = a[i][i] = 1;
		for (i = 2; i < n; ++i)
			for (j = 1; j < i; ++j)
				a[i][j] = a[i-1][j-1] + a[i-1][j];
		for (i = 0; i < n; ++i) {
			for (j = 0; j <= i; ++j) {
				printf("%d", a[i][j]);
				putchar(j == i ? '\n' : ' ');
			}
		}
		putchar('\n');
	}

	return 0;
}

