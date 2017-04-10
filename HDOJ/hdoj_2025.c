/*
�������Ԫ��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 56167    Accepted Submission(s): 30144


Problem Description
���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����
 

Input
�������ݰ����������ʵ����ÿ��ʵ����һ�г��Ȳ�����100���ַ�����ɣ��ַ������ɴ�Сд��ĸ���ɡ�
 

Output
����ÿ������ʵ�����һ���ַ���������Ľ���ǲ����ַ�����(max)����Ľ����������ڶ��������ĸ������ÿһ�������ĸ���涼����"(max)"��
 

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

