/*
A+B for Input-Output Practice (V)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 74057    Accepted Submission(s): 49374


Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.


Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.


Sample Input
2
4 1 2 3 4
5 1 2 3 4 5


Sample Output
10
15


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
	}

	return 0;
}

