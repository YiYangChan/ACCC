/*
C���ԺϷ���ʶ��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 71226    Accepted Submission(s): 27677


Problem Description
����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ����
 

Input
�������ݰ����������ʵ�������ݵĵ�һ����һ������n,��ʾ����ʵ���ĸ�����Ȼ����n���������ݣ�ÿ����һ�����Ȳ�����50���ַ�����
 

Output
����ÿ���������ݣ����һ�С��������������C�ĺϷ���ʶ���������"yes"�����������no����
 

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

