/*
�ַ���ͳ��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 79116    Accepted Submission(s): 43346


Problem Description
���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����


Input
���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ�����


Output
����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�


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

