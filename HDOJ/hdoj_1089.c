/*
A+B for Input-Output Practice (I)

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 129622    Accepted Submission(s): 69812


Problem Description
Your task is to Calculate a + b.
Too easy?! Of course! I specially designed the problem for acm beginners.
You must have found that some problems have the same titles with this one, yes, all these problems were designed for the same aim.


Input
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.


Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.


Sample Input
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
	int a, b;
	
	while (scanf("%d %d", &a, &b) == 2) {
		printf("%ld\n", a+b);
	}

	return 0;
}

