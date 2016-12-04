/*
ƽ������������

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 157657    Accepted Submission(s): 50254


Problem Description
����һ���������������������������ż����ƽ�����Լ����������������͡�


Input
�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�


Output
����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡�
�������Ϊ32λ�������Ա�������


Sample Input
1 3
2 5


Sample Output
4 28
20 152


Author
lcy
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	int i;
	
	while (scanf("%d %d", &m, &n) == 2) {
		long int x = 0, y = 0;

		if (m > n) {
			int temp = m;
			m = n;
			n = temp;
		}
		for (i = m; i <= n; ++i) {
			if (i%2 == 0)
				x += (int)pow(i, 2);
			else if (i%2 == 1)
				y += (int)pow(i, 3);
		}
		printf("%ld %ld\n", x, y);
	}
	
	return 0;
}

