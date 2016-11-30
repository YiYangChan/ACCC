/*
A+B for Input-Output Practice (VI)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 69350    Accepted Submission(s): 46399


Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line.


Output
For each test case you should output the sum of N integers in one line, and with one line of output for each line in input.


Sample Input
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
	
	while ((scanf("%d", &n) == 1)){
		int sum = 0, x;
		for (i = 0; i < n; ++i) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
	}

	return 0;
}

