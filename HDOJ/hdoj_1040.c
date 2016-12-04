/*
As Easy As A+B

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 58508    Accepted Submission(s): 25039


Problem Description
These days, I am thinking about a question, how can I get a problem as easy as A+B? It is fairly difficulty to do such a thing. Of course, I got it after many waking nights.
Give you some integers, your task is to sort these number ascending (ÉýÐò).
You should know how easy the problem is now!
Good luck!


Input
Input contains multiple test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. Each test case contains an integer N (1<=N<=1000 the number of integers to be sorted) and then N integers follow in the same line.
It is guarantied that all integers are in the range of 32-int.


Output
For each case, print the sorting result, and one line one case.


Sample Input
2
3 2 1 3
9 1 4 7 2 5 8 3 6 9


Sample Output
1 2 3
1 2 3 4 5 6 7 8 9


Author
lcy
*/

#include <stdio.h>

#define LIM 1001

int main()
{
	int t, n;
	int i, j, k;

	scanf("%d", &t);
	for (i = 0; i < t; ++i) {
		int a[LIM];
	
		scanf("%d", &n);
		for (j = 0; j < n; ++j)
			scanf("%d", &a[j]);
		for (j = 0; j < n; ++j)
			for (k = j+1; k < n; ++k)
				if (a[j] > a[k]){
					int t = a[j];
					a[j] = a[k];
					a[k] = t;
				}
		for (j = 0; j < n; ++j) {
			printf("%d", a[j]);
			putchar((j == n-1) ? '\n' : ' ');
 		}
	}

	return 0;
}

