/*
C语言合法标识符

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 71226    Accepted Submission(s): 27677


Problem Description
输入一个字符串，判断其是否是C的合法标识符。
 

Input
输入数据包含多个测试实例，数据的第一行是一个整数n,表示测试实例的个数，然后是n行输入数据，每行是一个长度不超过50的字符串。
 

Output
对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。
 

Sample Input
3
12ajf
fi8x_a
ff  ai_2
 

Sample Output
no
yes
no
 

Author
lcy
*/
#include <stdio.h>
#include <string.h>
#define LIM 50

int main()
{
	char s[LIM];
	int n, i;

	scanf("%d\n", &n);
	for (i = 0; i < n; ++i) {
		char c;
		int j = 0;
		while ((c = getchar()) != '\n') {
			s[j++] = c;
		}
		s[j] = 0;
		if (!isalpha(s[0]) && s[0] != '_') {
			printf("no\n");
			continue;
		} else {

			int j = 0;
			while (isalnum(s[++j]) || s[j] == '_')
				;
			if (s[j] == 0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}

	return 0;
}

