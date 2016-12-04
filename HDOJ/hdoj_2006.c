/*
�������ĳ˻�

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 87012    Accepted Submission(s): 53545


Problem Description
����n�������������������������ĳ˻���


Input
�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n������������Լ���ÿ�����ݱض����ٴ���һ��������


Output
���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ�С�


Sample Input
3 1 2 3
4 2 3 4 5


Sample Output
3
15


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, i;
	
	while (scanf("%d", &n) == 1) {
		long int result = 1;
		int x;

		for (i = 0; i < n; ++i) {
			scanf("%d", &x);
			if (x%2)
				result *= x;
		}
		printf("%ld\n", result);
	}

	return 0;
}

