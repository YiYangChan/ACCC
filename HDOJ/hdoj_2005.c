/*
�ڼ��죿

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 137323    Accepted Submission(s): 49303


Problem Description
����һ�����ڣ������������Ǹ���ĵڼ��졣


Input
���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY/MM/DD��ɣ�����μ�sample input ,���⣬��������ȷ�����е����������ǺϷ��ġ�


Output
����ÿ���������ݣ����һ�У���ʾ�������Ǹ���ĵڼ��졣


Sample Input
1985/1/20
2006/3/12


Sample Output
20
71


Author
lcy
*/

#include <stdio.h>

#define MON 12

int main()
{
	int y, m, d;
	
	while (scanf("%d/%d/%d", &y, &m, &d) == 3) {
		int days[] = {0, 31, (isLeapYear(y) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int i;
		int n = 0;

		for (i = 1; i < m; ++i)
			n += days[i];
		n += d;
		printf("%d\n", n);
	}

	return 0;
}

int isLeapYear(int year)
{
	if (year%4 == 0) {
		if ((year%100 == 0) && (year%400 != 0))
			return 0;
		else return 1;
	} else return 0;
}

