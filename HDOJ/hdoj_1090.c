/*
A+B for Input-Output Practice (II)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 97389    Accepted Submission(s): 62197


Problem Description
Your task is to Calculate a + b.


Input
Input contains an integer N in the first line, and then N lines follow. Each line consists of a pair of integers a and b, separated by a space, one pair of integers per line.


Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.


Sample Input
2
1 5
10 20


Sample Output
6
30


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, a, b;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		printf("%ld\n", a+b);
	}

	return 0;
}

