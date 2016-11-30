/*
A+B for Input-Output Practice (VIII)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 149349    Accepted Submission(s): 45201


Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.


Output
For each group of input integers you should output their sum in one line, and you must note that there is a blank line between outputs.


Sample Input
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3


Sample Output
10

15

6


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		int m, x, sum = 0;
		int j;

		scanf("%d", &m);
		for (j = 0; j < m; ++j) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
		if (i < n-1)
			putchar('\n');
	}

	return 0;
}

