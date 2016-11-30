/*
Sum Problem

Time Limit: 1000/500 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 445393    Accepted Submission(s): 111937


Problem Description
Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).

In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.


Input
The input will consist of a series of integers n, one integer per line.


Output
For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.


Sample Input
1
100


Sample Output
1

5050


Author
DOOM III
*/

#include <stdio.h>

long int SUM(int n);

int main()
{
	int n;
	
	while (scanf("%d", &n) != EOF) {
		printf("%d\n\n", SUM(n));
	}
	
	return 0;
}

long int SUM(int n)
{
	int i, s = 0;
	
	for (i = 1; i <= n; i++)
		s += i;

	return s;
}
