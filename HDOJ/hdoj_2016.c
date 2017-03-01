/*
数据的交换输出

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 101128    Accepted Submission(s): 37800


Problem Description
输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。


Input
输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。


Output
对于每组输入数据，输出交换后的数列，每组输出占一行。


Sample Input
4 2 1 3 4
5 5 4 3 2 1
0


Sample Output
1 2 3 4
1 4 3 2 5


Author
lcy
*/

#define LIM 100
#include <stdio.h>

int main()
{
        int n;
        
        scanf("%d", &n);
        while (n != 0) {
        	int i, locMin;
        	int a[LIM];
        	
        	for (i = 0; i < n; ++i) {
        		scanf("%d", &a[i]);
		}
//		for (i = 0; i < n; ++i) {
//			printf("%d", a[i]);
//			putchar((i == n-1) ? '\n' : ' ');
//		}
		locMin = 0;
		for (i = 0; i < n; ++i) {
			if (a[i] < a[locMin])
				locMin = i;
		}
		int t = a[0];
		a[0] = a[locMin];
		a[locMin] = t;
		for (i = 0; i < n; ++i) {
			printf("%d", a[i]);
			putchar((i == n-1) ? '\n' : ' ');
		}
		
		scanf("%d", &n);
	}

	return 0;
}

