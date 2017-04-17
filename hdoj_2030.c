/*
汉字统计

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 45055    Accepted Submission(s): 24538


Problem Description
统计给定文本文件中汉字的个数。


Input
输入文件首先包含一个整数n，表示测试实例的个数，然后是n段文本。


Output
对于每一段文本，输出其中的汉字的个数，每个测试实例的输出占一行。

[Hint:]从汉字机内码的特点考虑~



Sample Input
2
WaHaHa! WaHaHa! 今年过节不说话要说只说普通话WaHaHa! WaHaHa!
马上就要期末考试了Are you ready?


Sample Output
14
9


Author
lcy
*/
#include <stdio.h>
#define LIM 10001

int main()
{
	int n, i;

	scanf("%d\n", &n);
	for (i = 0; i < n; ++i) {
		int c, count = 0;

		char s[LIM];
		gets(s);
		int j;
		for (j = 0; s[j] != 0; ++j) {
			if (s[j] < 0)
				++count;
		}

		printf("%d\n", count/2);
	}

	return 0;
}

