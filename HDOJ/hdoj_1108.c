/*
��С������

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 51125    Accepted Submission(s): 28520


Problem Description
��������������������������������С��������


Input
�����������������ݣ�ÿ��ֻ��һ�У���������������1000��������.


Output
����ÿ����������������������������С��������ÿ��ʵ�����һ�С�


Sample Input
10 14


Sample Output
70


Source
POJ
*/

#include <stdio.h>

/*  find LCM */

int main()
{
	long int a, b;
	
	while (scanf("%d %d", &a, &b) == 2) {
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int lcm = a;
		while (lcm%b)
			lcm += a;
		printf("%ld\n", lcm);
	}

	return 0;
}

