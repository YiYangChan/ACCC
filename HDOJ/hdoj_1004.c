/*
Let the Balloon Rise

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 118902    Accepted Submission(s): 46608


Problem Description
Contest time again! How excited it is to see balloons floating around. But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.

This year, they decide to leave this lovely job to you.


Input
Input contains multiple test cases. Each test case starts with a number N (0 < N <= 1000) -- the total number of balloons distributed. The next N lines contain one color each. The color of a balloon is a string of up to 15 lower-case letters.

A test case with N = 0 terminates the input and this test case is not to be processed.


Output
For each case, print the color of balloon for the most popular problem on a single line. It is guaranteed that there is a unique solution for each test case.


Sample Input
5
green
red
blue
red
red
3
pink
orange
pink
0


Sample Output
red
pink


Author
WU, Jiazhi


Source
ZJCPC2004
*/
#include <stdio.h>
#include <string.h>
#define nLIM 1001
#define wLIM 16

int main()
{
	int n;

	scanf("%d", &n);
	while (n) {
		int i, nType = 0;
		int cnt[n];
		char s[n][wLIM];

		memset(cnt, 0, sizeof(cnt));
		for (i = 0; i < n; ++i) {
			char ts[wLIM];
			int found = 0, j;

			scanf("%s", ts);
			for (j = 0; j < nType; ++j)
				if (!strcmp(ts, s[j])) {
					++cnt[j];
					found = 1;
					break;
				}
			if (!found) {
				++cnt[nType];
				strcpy(s[nType++], ts);
			}
		}
		int max = 0, lc;
		for (i = 0; i < nType; ++i) {
			if (max < cnt[i]) {
				max = cnt[i];
				lc = i;
			}
		}
		printf("%s\n", s[lc]);
		scanf("%d", &n);
	}

	return 0;
}

