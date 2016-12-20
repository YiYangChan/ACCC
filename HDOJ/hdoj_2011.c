/*
����ʽ���

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 74118    Accepted Submission(s): 42265


Problem Description
����ʽ���������£�
1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
������������ö���ʽ��ǰn��ĺ͡�


Input
����������2����ɣ�������һ��������m��m<100������ʾ����ʵ���ĸ������ڶ��а���m��������������ÿһ������(������Ϊn,n<1000������ö���ʽ��ǰn��ĺ͡�


Output
����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС����


Sample Input
2
1 2


Sample Output
1.00
0.50


Author
lcy
*/

#include <stdio.h>

int main()
{
	int m, n;          /*  m: number of test cases; n: test case	*/
	double sign;
	int i, j;
	double s;
	
	scanf("%d", &m);
	for (i = 0; i < m; ++i) {
		scanf("%d", &n);
		s = 0;
		sign = 1;
		for (j = 1; j <= n; ++j) {
			s += sign/(double)j;
			sign = -sign;
		}
		printf("%.2lf\n", s);
	}
	
	return 0;
}

