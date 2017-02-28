/*
青年歌手大奖赛_评委会打分

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 84754    Accepted Submission(s): 42102


Problem Description
青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。


Input
输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分。


Output
对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。


Sample Input
3 99 98 97
4 100 99 98 97


Sample Output
98.00
98.50


Author
lcy
*/

#include <stdio.h>

int main()
{
	int n, i;
	double t, max, min;
	double s;
	
        while (scanf("%d", &n) == 1) {
        	s = 0;
        	max = 0;
		min = 100;
        	for (i = 0; i < n; ++i) {
        		scanf("%lf", &t);
			s += t;
			max = (t >= max) ? t : max;
			min = (t <= min) ? t : min;
		}
		printf("%.2f\n", (s-max-min)/(double)(n-2));
	}

	return 0;
}

