/*
统计元音

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 70743    Accepted Submission(s): 27975


Problem Description
统计每个元音字母在字符串中出现的次数。
 

Input
输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。
 

Output
对于每个测试实例输出5行，格式如下：
a:num1
e:num2
i:num3
o:num4
u:num5
多个测试实例之间由一个空行隔开。

请特别注意：最后一块输出后面没有空行：）
 

Sample Input
2
aeiou
my name is ignatius
 

Sample Output
a:1
e:1
i:1
o:1
u:1

a:2
e:1
i:3
o:0
u:1
 

Author
lcy
*/
#include <stdio.h>

int main()
{
	int n, i;
	int c;

	scanf("%d\n", &n);
	c = getchar();
	for (i = 0; i < n; ++i) {
		int a[5] = {0};
		while (c != '\n') {
			if (c == 'a' || c == 'A')
				++a[0];
			else if (c == 'e' || c == 'E')
				++a[1];
			else if (c == 'i' || c == 'I')
				++a[2];
			else if (c == 'o' || c == 'O')
				++a[3];
			else if (c == 'u' || c == 'U')
				++a[4];
			c = getchar();
		}
		int j;
		for (j = 0; j < 5; ++j) {
			switch (j) {
				case 0 :
					printf("a:%d\n", a[j]);
					break;
				case 1 :
					printf("e:%d\n", a[j]);
					break;
				case 2 :
					printf("i:%d\n", a[j]);
					break;
				case 3 :
					printf("o:%d\n", a[j]);
					break;
				case 4 :
					printf("u:%d\n", a[j]);
					break;
			}
		}
		if ((c = getchar()) != EOF)
			putchar('\n');
	}

	return 0;
}
