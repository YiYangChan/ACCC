/*
���������ľ���

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 196488    Accepted Submission(s): 68459


Problem Description
�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣


Input
���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո������


Output
����ÿ���������ݣ����һ�У����������λС����


Sample Input
0 0 0 1
0 1 1 0


Sample Output
1.00
1.41


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double x1, y1, x2, y2;
	
	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == 4) {
		printf("%.2lf\n", sqrt(pow((x1-x2), 2) + pow((y1-y2), 2)));
	}

	return 0;
}

