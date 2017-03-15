/*
数列有序!

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 87097    Accepted Submission(s): 36555


Problem Description
有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。


Input
输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。


Output
对于每个测试实例，输出插入新的元素后的数列。


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

