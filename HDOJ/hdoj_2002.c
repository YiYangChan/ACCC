/*
���������

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 147729    Accepted Submission(s): 59200


Problem Description
��������İ뾶ֵ��������������


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶��


Output
�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС����


Sample Input
1
1.5


Sample Output
4.189
14.137

Hint

#define PI 3.1415927



Author
lcy
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415927

int main()
{
	double r;
	
	while (scanf("%lf", &r) == 1) {
		printf("%.3lf\n", 4.0/3.0*PI*pow(r, 3));
	}
	
	return 0;
}

