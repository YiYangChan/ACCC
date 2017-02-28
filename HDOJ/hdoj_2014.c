/*
������ִ���_��ί����

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 84754    Accepted Submission(s): 42102


Problem Description
������ִ����У���ί�������ѡ�ִ�֡�ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2<n<=100)����ʾ��ί��������Ȼ����n����ί�Ĵ�֡�


Output
����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ�С�


Sample Input
3 99 98 97
4 100 99 98 97


Sample Output
98.00
98.50


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, i;
	double t, max, min;
	double s;
	
        while (scanf("%d", &n) == 1) {
        	s = 0;
        	max = 0;
		min = 100;
        	for (i = 0; i < n; ++i) {
        		scanf("%lf", &t);
			s += t;
			max = (t >= max) ? t : max;
			min = (t <= min) ? t : min;
		}
		printf("%.2f\n", (s-max-min)/(double)(n-2));
	}

	return 0;
}

