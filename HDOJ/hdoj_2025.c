/*
查找最大元素

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 56167    Accepted Submission(s): 30144


Problem Description
对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
 

Input
输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母构成。
 

Output
对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。
 

Sample Input
abcdefgfedcba
xxxxx
 

Sample Output
abcdefg(max)fedcba
x(max)x(max)x(max)x(max)x(max)
 

Author
lcy
*/
#include <stdio.h>
#include <string.h>
#define LIM 100

int main()
{
	int c;
	int s[100];
	int max = 0;
	int n = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n')
			s[n++] = c;
		else {
			int i;
			for (i = 0; i < n; ++i) {
				int tc = s[i];
				if (tc > max)
					max = tc;
			}
			for (i = 0; i < n; ++i) {
				int tc = s[i];
				if (tc == max)
					printf("%c(max)", s[i]);
				else
					putchar(s[i]);
			}
			putchar('\n');
			n = 0;
			max = 0;
		}
	}

	return 0;
}

