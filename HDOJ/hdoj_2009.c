/*
求数列的和

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 77808    Accepted Submission(s): 47191


Problem Description
数列的定义如下：
数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。


Input
输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。


Output
对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。


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

