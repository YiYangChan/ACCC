/*
杨辉三角

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 66699    Accepted Submission(s): 27604


Problem Description
还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1


Input
输入数据包含多个测试实例，每个测试实例的输入只包含一个正整数n（1<=n<=30），表示将要输出的杨辉三角的层数。


Output
对应于每一个输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开，每一个杨辉三角后面加一个空行。


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

