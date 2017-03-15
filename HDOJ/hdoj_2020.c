/*
����ֵ����

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 77956    Accepted Submission(s): 37112


Problem Description
����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn,������n��������n=0��ʾ�������ݵĽ�������������


Output
����ÿ������ʵ������������Ľ����������֮����һ���ո������ÿ������ʵ��ռһ�С�


Sample Input
3 3 -4 2
4 0 1 2 -3
0


Sample Output
-4 3 2
-3 2 1 0


Author
lcy
*/
#include <stdio.h>
#include <math.h>

#define LIM 100

void swap(int *a, int *b);

int main()
{
	int n;
	int a[LIM], sign[LIM];
	
	scanf("%d", &n);
	while (n != 0) {
		int i, j;
		
		for (i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for (i = 0; i < n; ++i)
			for (j = i+1; j < n; ++j)
				if (abs(a[i]) < abs(a[j]))
					swap(&a[i], &a[j]);
		for (i = 0; i < n; ++i) {
			printf("%d", a[i]);
			putchar((i == n-1) ? '\n' : ' ');
		}
		
		scanf("%d", &n);
	}

	return 0;
}

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
