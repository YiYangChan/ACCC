/*
Number Sequence

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 170359    Accepted Submission(s): 42024


Problem Description
A number sequence is defined as follows:

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

Given A, B, and n, you are to calculate the value of f(n).


Input
The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.


Output
For each test case, print the value of f(n) on a single line.


Sample Input
1 1 3
1 2 10
0 0 0


Sample Output
2
5


Author
CHEN, Shunbao


Source
ZJCPC2004
*/
#include <stdio.h>
#define LIM 10001

int main()
{
	int f[LIM];
	int seekLoop[LIM];
	int a, b, n;

	f[1] = f[2] = 1;
	while (scanf("%d %d %d", &a, &b, &n) && (a || b || n)) {
		int found = 0;
		int i = 1;
		seekLoop[i] = f[i]*10 + f[i+1];
		++i;
		while (!found && ++i <= n) {
			f[i] = (a*f[i-1] + b*f[i-2])%7;
			seekLoop[i-1] = f[i-1]*10 + f[i];
			int j = i-1;
			while (!found && j > 1) {
				if (seekLoop[--j] == seekLoop[i-1]) {
					found = 1;
					int t = i-1-j;
					n -= ((n-j+1)/t - (((n-j+1)%t == 0) ? 1 : 0))*t;
				}
			}
		}
		printf("%d\n", f[n]);
	}

	return 0;
}

