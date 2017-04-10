/*
首字母变大写

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 59761    Accepted Submission(s): 32805


Problem Description
输入一个英文句子，将每个单词的第一个字母改成大写字母。
 

Input
输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
 

Output
请输出按照要求改写后的英文句子。
 

Sample Input
i like acm
i want to get an accepted
 

Sample Output
I Like Acm
I Want To Get An Accepted
 

Author
lcy
*/
#include <stdio.h>
#include <string.h>

int main()
{
	int c;
	int up = 1;

	while ((c = getchar()) != EOF) {
		if (up) {
			putchar(toupper(c));
			up = 0;
		}
		else
			putchar(c);
		if (c == '\n' || isspace(c))
			up = 1;
	}

	return 0;
}

