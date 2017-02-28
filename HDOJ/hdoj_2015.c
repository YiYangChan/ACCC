/*
偶数求和

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 85103    Accepted Submission(s): 35988


Problem Description
有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。


Input
输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。


Output
对于每组输入数据，输出一个平均值序列，每组输出占一行。


Sample Input
3 2
4 2


Sample Output
3 6
3 7


Author
lcy
*/
#include <stdio.h>

int main()
{
	int n, m;
	int i, j = 0;
	int l;
	
	while (scanf("%d %d", &n, &m) == 2) {
		for (i = 2; i <= n*2; i += 2) {
			++j;
			if (j == 1)
				l = i;
			if (j == m || i == n*2) {
				printf("%d", (l+i)/2);
				j = 0;
				putchar((i == n*2) ? '\n' : ' ');
			}
		}
	}

	return 0;
}

