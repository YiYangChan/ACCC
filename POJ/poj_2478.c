/*
Farey Sequence
Time Limit: 1000MS		Memory Limit: 65536K
Total Submissions: 16690		Accepted: 6636
Description

The Farey Sequence Fn for any integer n with n >= 2 is the set of irreducible rational numbers a/b with 0 < a < b <= n and gcd(a,b) = 1 arranged in increasing order. The first few are 
F2 = {1/2} 
F3 = {1/3, 1/2, 2/3} 
F4 = {1/4, 1/3, 1/2, 2/3, 3/4} 
F5 = {1/5, 1/4, 1/3, 2/5, 1/2, 3/5, 2/3, 3/4, 4/5} 

You task is to calculate the number of terms in the Farey sequence Fn.
Input

There are several test cases. Each test case has only one line, which contains a positive integer n (2 <= n <= 106). There are no blank lines between cases. A line with a single 0 terminates the input.
Output

For each test case, you should output one line, which contains N(n) ---- the number of terms in the Farey sequence Fn. 
Sample Input

2
3
4
5
0
Sample Output

1
3
5
9
*/
#include <stdio.h>
#include <string.h>

#define LIM 1000100

int euler[LIM];

void getEuler() {
	memset(euler,0,sizeof(euler));
	euler[1] = 1;
	int i;
	for (i = 2; i <= LIM; ++i)
		if (!euler[i]) {
			int j;
			for (j = i;j <= LIM; j += i) {
				if (!euler[j])
				euler[j] = j;
				euler[j] = euler[j]/i*(i-1);
			}
		}
}

long long num[LIM];

int main()
{
	int n;
	int end = 2;
	num[end] = 1;
	
	getEuler();
	while (scanf("%d", &n) && n) {
		int i;
		for (i = end+1; i <= n; ++i)
			num[i] = num[i-1] + euler[i];
		end = (n > end) ? n : end;
		printf("%lld\n", num[n]);
	}

	return 0;
}

