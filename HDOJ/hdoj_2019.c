/*
��������!

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 87097    Accepted Submission(s): 36555


Problem Description
��n(n<=100)���������Ѿ����մ�С����˳�����кã����������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����


Input
�������ݰ����������ʵ����ÿ��������������ɣ���һ����n��m���ڶ������Ѿ������n���������С�n��mͬʱΪ0��ʾ�������ݵĽ��������в�������


Output
����ÿ������ʵ������������µ�Ԫ�غ�����С�


Sample Input
3 3
1 2 4
0 0


Sample Output
1 2 3 4


Author
lcy
*/
#include <stdio.h>
#define LIM 101

int main()
{
	int n, m;
	int a[LIM];
	int i;
	int insd;
	
	scanf("%d %d", &n, &m);
	while (n != 0 || m != 0) {
		insd = 0;
		for (i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		i = 0;
		while (i < n && !insd) {
			if (a[i] > m) {
				int j;
				for (j = n; j > i; --j)
					a[j] = a[j-1];
				a[i] = m;
				insd = 1;
			}
			++i;
		}
		if (!insd)
			a[n] = m;
		for (i = 0; i < n+1; ++i) {
			printf("%d", a[i]);
			putchar((i < n) ? ' ' : '\n');
		}
		scanf("%d %d", &n, &m);
	}
	
	return 0;
}

