/*
平方和与立方和

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 157657    Accepted Submission(s): 50254


Problem Description
给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。


Input
输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。


Output
对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
你可以认为32位整数足以保存结果。


Sample Input
1 3
2 5


Sample Output
4 28
20 152


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	int i;
	
	while (scanf("%d %d", &m, &n) == 2) {
		long int x = 0, y = 0;

		if (m > n) {
			int temp = m;
			m = n;
			n = temp;
		}
		for (i = m; i <= n; ++i) {
			if (i%2 == 0)
				x += (int)pow(i, 2);
			else if (i%2 == 1)
				y += (int)pow(i, 3);
		}
		printf("%ld %ld\n", x, y);
	}
	
	return 0;
}

