/*
ż�����

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 85103    Accepted Submission(s): 35988


Problem Description
��һ������Ϊn(n<=100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż��������Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ����������m��������ʵ��������ƽ��ֵ����������ƽ��ֵ���С�


Input
���������ж��飬ÿ��ռһ�У���������������n��m��n��m�ĺ�������������


Output
����ÿ���������ݣ����һ��ƽ��ֵ���У�ÿ�����ռһ�С�


Sample Input
3 2
4 2


Sample Output
3 6
3 7


Author
lcy
*/
#include <stdio.h>

int main()
{
	int n, m;
	int i, j = 0;
	int l;
	
	while (scanf("%d %d", &n, &m) == 2) {
		for (i = 2; i <= n*2; i += 2) {
			++j;
			if (j == 1)
				l = i;
			if (j == m || i == n*2) {
				printf("%d", (l+i)/2);
				j = 0;
				putchar((i == n*2) ? '\n' : ' ');
			}
		}
	}

	return 0;
}

