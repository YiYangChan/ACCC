/*
Palindromes _easy version

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 40803    Accepted Submission(s): 24797


Problem Description
�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ���


Input
��������������ʵ�����������ݵĵ�һ����һ��������n,��ʾ����ʵ���ĸ����������������n���ַ�����


Output
���һ���ַ����ǻ��Ĵ��������"yes",�������"no".


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

