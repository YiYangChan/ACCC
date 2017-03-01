/*
���ݵĽ������

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 101128    Accepted Submission(s): 37800


Problem Description
����n(n<100)�������ҳ�������С��������������ǰ����������������Щ����


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������


Output
����ÿ���������ݣ��������������У�ÿ�����ռһ�С�


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

