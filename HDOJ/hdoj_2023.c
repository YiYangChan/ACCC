/*
求平均成绩

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 121621    Accepted Submission(s): 27869


Problem Description
假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。


Input
输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。


Output
对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
每个测试实例后面跟一个空行。


Sample Input
2 2
5 10
10 20


Sample Output
7.50 15.00
7.50 15.00
1


Author
lcy
*/
#include <stdio.h>
#define NLIM 50
#define MLIM 5

int main()
{
	int n, m, i, j;
	int a[NLIM][MLIM];
	double subAve[MLIM];
	int next;
	int num;
	
	if (scanf("%d %d", &n, &m) == 2)
		next = 1;
	while (next) {
		for (i = 0; i < n; ++i)
			for (j = 0; j < m; ++j)
				scanf("%d", &a[i][j]);
		for (i = 0; i < n; ++i) {
			double g = 0.0;		// total grade of a stu

			for (j = 0; j < m; ++j)
				g += a[i][j];
			printf("%.2lf", g/(double)m);
			putchar((i == n-1) ? '\n' : ' ');
		}
		for (j = 0; j < m; ++j) {
			double g = 0.0;		// total grade of a sub

			for (i = 0; i < n; ++i) {
				g += a[i][j];
			}
			subAve[j] = g/(double)n;
			printf("%.2lf", subAve[j]);
			putchar((j == m-1) ? '\n' :' ');
		}
		num = 0;
		for (i = 0; i < n; ++i) {
			j = 0;
			while (a[i][j] >= subAve[j] && j < m)
				++j;
			if (j == m)
				++num;
		}
		printf("%d\n\n", num);
		
		if (scanf("%d %d", &n, &m) == 2) {
//			putchar('\n');
			next = 1;
		} else
			next = 0;
	}

	return 0;
}

