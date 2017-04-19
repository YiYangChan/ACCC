/*
Palindromes _easy version

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 40803    Accepted Submission(s): 24797


Problem Description
“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。


Input
输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，后面紧跟着是n个字符串。


Output
如果一个字符串是回文串，则输出"yes",否则输出"no".


Sample Input
4
level
abcde
noon
haha


Sample Output
yes
no
yes
no


Author
lcy
*/
#include <stdio.h>
#include <string.h>
#define LIM 10001

int main()
{
	int n, i;

	while (scanf("%d", &n) == 1) {
		for (i = 0; i < n; ++i) {
			char s[LIM];
			scanf("%s", s);
			int len = strlen(s);
			int j = 0;
			int maybe = 1;
			while (j < len/2 && maybe) {
				if (s[j] != s[len-1-j])
					maybe = 0;
				else
					++j;
			}
			if (maybe)
				printf("yes\n");
			else
				printf("no\n");
		}
	}

	return 0;
}

