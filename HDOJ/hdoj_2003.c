/*
求绝对值

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 124061    Accepted Submission(s): 60350


Problem Description
求实数的绝对值。


Input
输入数据有多组，每组占一行，每行包含一个实数。


Output
对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。


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

