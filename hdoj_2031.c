/*
����ת��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 48948    Accepted Submission(s): 26877


Problem Description
����һ��ʮ������N������ת����R�����������


Input
�������ݰ����������ʵ����ÿ������ʵ��������������N(32λ����)��R��2<=R<=16, R<>10����


Output
Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����R����10�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ���


Sample Input
7 2
23 12
-4 3


Sample Output
111
1B
-11


Author
lcy
*/
#include <stdio.h>
#define LIM 10001

int main()
{
	int n, r;

	while (scanf("%d%d", &n, &r) == 2) {
		if (n < 0) {
			putchar('-');
			n = -n;
		}
		int x[LIM] = {0};
		int i = 0;
		do {
			x[i++] = n%r;
		} while ((n /= r) != 0);
		int len = i;
		for (i = len-1; i >= 0; --i) {
			if (x[i] < 10)
				printf("%d", x[i]);
			else {
				x[i] = x[i]-10+'A';
				putchar(x[i]);
			}
		}
		putchar('\n');
	}

	return 0;
}

