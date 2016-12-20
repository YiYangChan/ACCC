/*
多项式求和

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 74118    Accepted Submission(s): 42265


Problem Description
多项式的描述如下：
1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
现在请你求出该多项式的前n项的和。


Input
输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，第二行包含m个正整数，对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和。


Output
对于每个测试实例n，要求输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数。


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

