/*
进制转换

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 48948    Accepted Submission(s): 26877


Problem Description
输入一个十进制数N，将它转换成R进制数输出。


Input
输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。


Output
为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。


Sample Input
7 2
23 12
-4 3


Sample Output
111
1B
-11


Author
lcy
*/
#include <stdio.h>
#define LIM 10001

int main()
{
	int n, r;

	while (scanf("%d%d", &n, &r) == 2) {
		if (n < 0) {
			putchar('-');
			n = -n;
		}
		int x[LIM] = {0};
		int i = 0;
		do {
			x[i++] = n%r;
		} while ((n /= r) != 0);
		int len = i;
		for (i = len-1; i >= 0; --i) {
			if (x[i] < 10)
				printf("%d", x[i]);
			else {
				x[i] = x[i]-10+'A';
				putchar(x[i]);
			}
		}
		putchar('\n');
	}

	return 0;
}

