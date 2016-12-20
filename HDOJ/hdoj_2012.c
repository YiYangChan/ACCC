/*
素数判定

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 130253    Accepted Submission(s): 45672


Problem Description
对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数。


Input
输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。


Output
对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。


Sample Input
0 1
0 0


Sample Output
OK


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main()
{
	int x, y;
	int i;
	int OK;
	
	scanf("%d %d", &x, &y);
        while (!(x == 0 && y == 0)) {
        	OK = 1;
//		for (i = x; i <= y; ++i) {
//			if (!isPrime(pow(i, 2) + i + 41)) {
//				OK = 0;
//				break;
//			}
//		}
		i = x;
		while (OK && i <= y) {
			if (!isPrime(pow(i, 2) + i + 41))
				OK = 0;
			++i;
		}
		if (OK)
			printf("OK\n");
		else
			printf("Sorry\n");
		scanf("%d %d", &x, &y);
	}

	return 0;
}

int isPrime(int x)
{
	int k;
	int found;
	
	if (x < 2)
		return 0;
	else {
		k = 2;
		found = 0;
		while (k <= (int)sqrt(x) && !found) {
			if (x%k == 0)
				found = 1;
			++k;
		}
		if (!found)
			return 1;
		else
			return 0;
	}
}
