/*
�����еĺ�

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 77808    Accepted Submission(s): 47191


Problem Description
���еĶ������£�
���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�


Input
���������ж��飬ÿ��ռһ�У�����������n��n<10000����m(m<1000)��ɣ�n��m�ĺ�����ǰ������


Output
����ÿ���������ݣ���������еĺͣ�ÿ������ʵ��ռһ�У�Ҫ�󾫶ȱ���2λС����


Sample Input
81 4
2 2


Sample Output
94.73
3.41


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double n;
	int m;
	
	while (scanf("%lf %d", &n, &m) == 2) {
		double s = 0;

		while (m > 0) {
			s += n;
			n = sqrt(n);
			--m;
		}
		printf("%.2lf\n", s);
	}

	return 0;
}

