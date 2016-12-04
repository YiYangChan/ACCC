/*
求奇数的乘积

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 87012    Accepted Submission(s): 53545


Problem Description
给你n个整数，求他们中所有奇数的乘积。


Input
输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。


Output
输出每组数中的所有奇数的乘积，对于测试实例，输出一行。


Sample Input
3 1 2 3
4 2 3 4 5


Sample Output
3
15


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, i;
	
	while (scanf("%d", &n) == 1) {
		long int result = 1;
		int x;

		for (i = 0; i < n; ++i) {
			scanf("%d", &x);
			if (x%2)
				result *= x;
		}
		printf("%ld\n", result);
	}

	return 0;
}

