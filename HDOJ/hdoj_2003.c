/*
�����ֵ

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 124061    Accepted Submission(s): 60350


Problem Description
��ʵ���ľ���ֵ��


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����


Output
����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����


Sample Input
123
-234.00


Sample Output
123.00
234.00


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	
	while (scanf("%lf", &x) == 1) {
		printf("%.2lf\n", fabs(x));
	}

	return 0;
}

