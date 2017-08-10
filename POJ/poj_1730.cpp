/*
Perfect Pth Powers
Time Limit: 1000MS		Memory Limit: 10000K
Total Submissions: 17904		Accepted: 4111
Description

We say that x is a perfect square if, for some integer b, x = b2. Similarly, x is a perfect cube if, for some integer b, x = b3. More generally, x is a perfect pth power if, for some integer b, x = bp. Given an integer x you are to determine the largest p such that x is a perfect pth power.
Input

Each test case is given by a line of input containing x. The value of x will have magnitude at least 2 and be within the range of a (32-bit) int in C, C++, and Java. A line containing 0 follows the last test case.
Output

For each test case, output a line giving the largest integer p such that x is a perfect pth power.
Sample Input

17
1073741824
25
0
Sample Output

1
30
2
*/
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	
	while (scanf("%d", &n) && n) {
		bool flag = false;
		if (n < 0) {
			n = -n;
			flag = true;
		}
		for (int i = 31; i > 0; --i) {
			int b = (int) (pow(1.0*n, 1.0/i) + 0.1);
			int nn = (int) (pow(1.0*b, 1.0*i) + 0.1);
			if (n == nn) {
				if (flag)
					while (i % 2 == 0)
						i /= 2;
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}
