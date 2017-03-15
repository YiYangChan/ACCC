/*
绝对值排序

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 77956    Accepted Submission(s): 37112


Problem Description
输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。


Input
输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。


Output
对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。


Sample Input
3 3 -4 2
4 0 1 2 -3
0


Sample Output
-4 3 2
-3 2 1 0


Author
lcy
*/
#include <stdio.h>
#include <math.h>

#define LIM 100

void swap(int *a, int *b);

int main()
{
	int n;
	int a[LIM], sign[LIM];
	
	scanf("%d", &n);
	while (n != 0) {
		int i, j;
		
		for (i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for (i = 0; i < n; ++i)
			for (j = i+1; j < n; ++j)
				if (abs(a[i]) < abs(a[j]))
					swap(&a[i], &a[j]);
		for (i = 0; i < n; ++i) {
			printf("%d", a[i]);
			putchar((i == n-1) ? '\n' : ' ');
		}
		
		scanf("%d", &n);
	}

	return 0;
}

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
