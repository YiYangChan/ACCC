/*
�����ж�

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 130253    Accepted Submission(s): 45672


Problem Description
���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ������


Input
���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������


Output
����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ�С�


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
