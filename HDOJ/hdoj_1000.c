/*
A + B Problem

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 624823    Accepted Submission(s): 195181


Problem Description
Calculate A + B.


Input
Each line will contain two integers A and B. Process to end of file.


Output
For each case, output A + B in one line.


Sample Input
1 1


Sample Output
2


Author
HDOJ
*/

#include <stdio.h>

int main()
{
	long int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a+b);
	}
	
	return 0;
}
