/*
最小公倍数

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 51125    Accepted Submission(s): 28520


Problem Description
给定两个正整数，计算这两个数的最小公倍数。


Input
输入包含多组测试数据，每组只有一行，包括两个不大于1000的正整数.


Output
对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。


Sample Input
10 14


Sample Output
70


Source
POJ
*/

#include <stdio.h>

/*  find LCM */

int main()
{
	long int a, b;
	
	while (scanf("%d %d", &a, &b) == 2) {
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int lcm = a;
		while (lcm%b)
			lcm += a;
		printf("%ld\n", lcm);
	}

	return 0;
}

