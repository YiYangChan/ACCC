/*
ˮ�ɻ���

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 180362    Accepted Submission(s): 51437


Problem Description
�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�����ѧ���и�ˮ�ɻ�����������������ģ�
��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�����磺153=1^3+5^3+3^3��
����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����


Input
���������ж��飬ÿ��ռһ�У�������������m��n��100<=m<=n<=999����


Output
����ÿ������ʵ����Ҫ����������ڸ�����Χ�ڵ�ˮ�ɻ���������˵�������ˮ�ɻ���������ڵ���m,����С�ڵ���n������ж������Ҫ���С����������һ���������֮����һ���ո����;
��������ķ�Χ�ڲ�����ˮ�ɻ����������no;
ÿ������ʵ�������ռһ�С�


Sample Input
100 120
300 380


Sample Output
no
370 371


Author
lcy
*/

#define LIMIT 100

#include <stdio.h>
#include <math.h>

int isDaff(int x);

int main()
{
	int m, n;
	int i;
	int nd;         /*  number of Number of daffodils	*/
	int a[LIMIT];   /*  save Number of daffodils found	*/
	
	while (scanf("%d %d", &m, &n) == 2) {
		nd = 0;
		for (i = m; i <= n; ++i) {
			if (isDaff(i)) {
				a[nd++] = i;
			}
		}
		if (nd == 0)
			printf("no\n");
		else {
			for (i = 0; i < nd; ++i) {
				printf("%d", a[i]);
				putchar((i == nd-1) ? '\n' : ' ');
			}
		}
	}

	return 0;
}

int isDaff(int x)
{
	int s;
	int tmp = x;
	
	s = 0;
	s += pow(tmp%10, 3);
	tmp /= 10;
	s += pow(tmp%10, 3);
	tmp /= 10;
	s += pow(tmp%10, 3);

	if (s == x)
		return 1;
	else
		return 0;
}
