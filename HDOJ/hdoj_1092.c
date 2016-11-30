/*
A+B for Input-Output Practice (IV)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 99813    Accepted Submission(s): 52705


Problem Description
Your task is to Calculate the sum of some integers.


Input
Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.


Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.


Sample Input
4 1 2 3 4
5 1 2 3 4 5
0


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
	while (n != 0) {
		int x, sum = 0;
		for (i = 0; i < n; ++i) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
		scanf("%d", &n);
	}

	return 0;
}

