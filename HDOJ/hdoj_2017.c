/*
字符串统计

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 79116    Accepted Submission(s): 43346


Problem Description
对于给定的一个字符串，统计其中数字字符出现的次数。


Input
输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。


Output
对于每个测试实例，输出该串中数值的个数，每个输出占一行。


Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf


Sample Output
6
9


Author
lcy
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int n;
	
	scanf("%d\n", &n);
	while (n-- > 0) {
		int c, m = 0;
		
		while ((c = getchar()) != '\n')
			if (isdigit(c))
				++m;
		printf("%d\n", m);
	}

	return 0;
}

