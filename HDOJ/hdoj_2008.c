/*
数值统计

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 99867    Accepted Submission(s): 48360


Problem Description
统计给定的n个数中，负数、零和正数的个数。


Input
输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。


Output
对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。


Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0


Sample Output
1 2 3
0 0 5


Author
lcy
*/

#include <stdio.h>

int main()
{
        int n, i;
	double x;
	int nn, zr, pn;         /*  negative number, zero, positive number	*/
	
        scanf("%d", &n);
        while (n != 0) {
        	nn = zr = pn = 0;
		for (i = 0; i < n; ++i) {
			scanf("%lf", &x);
			if (x < 0)
				++nn;
			else if (x == 0)
				++zr;
			else if (x > 0)
				++pn;
		}
		printf("%d %d %d\n", nn, zr, pn);
        	scanf("%d", &n);
	}

	return 0;
}

