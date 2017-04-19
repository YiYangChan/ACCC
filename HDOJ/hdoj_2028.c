/*
Lowest Common Multiple Plus

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 59847    Accepted Submission(s): 24853


Problem Description
求n个数的最小公倍数。


Input
输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。


Output
为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数。


Sample Input
2 4 6
3 2 5 7


Sample Output
12
70


Author
lcy
*/
#include <stdio.h>
#include <string.h>

int main()
{
	int i, n;

	while (scanf("%d", &n) == 1) {
		int max = 0;
		int a[n];

		for (i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			if (max < a[i])
				max = a[i];
		}

		long lcm = 0;
		int isLCM = 0;
		while (!isLCM) {
			lcm += max;
			int maybe = 1;
			i = 0;
			while (maybe && i < n) {
				if (lcm%a[i] != 0)
					maybe = 0;
				else
					++i;
			}
			if (maybe)
				isLCM = 1;
		}

		printf("%ld\n", lcm);
	}

	return 0;
}
