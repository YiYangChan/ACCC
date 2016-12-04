/*
第几天？

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 137323    Accepted Submission(s): 49303


Problem Description
给定一个日期，输出这个日期是该年的第几天。


Input
输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。


Output
对于每组输入数据，输出一行，表示该日期是该年的第几天。


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

