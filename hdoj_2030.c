/*
����ͳ��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 45055    Accepted Submission(s): 24538


Problem Description
ͳ�Ƹ����ı��ļ��к��ֵĸ�����


Input
�����ļ����Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n���ı���


Output
����ÿһ���ı���������еĺ��ֵĸ�����ÿ������ʵ�������ռһ�С�

[Hint:]�Ӻ��ֻ�������ص㿼��~



Sample Input
2
WaHaHa! WaHaHa! ������ڲ�˵��Ҫ˵ֻ˵��ͨ��WaHaHa! WaHaHa!
���Ͼ�Ҫ��ĩ������Are you ready?


Sample Output
14
9


Author
lcy
*/
#include <stdio.h>
#define LIM 10001

int main()
{
	int n, i;

	scanf("%d\n", &n);
	for (i = 0; i < n; ++i) {
		int c, count = 0;

		char s[LIM];
		gets(s);
		int j;
		for (j = 0; s[j] != 0; ++j) {
			if (s[j] < 0)
				++count;
		}

		printf("%d\n", count/2);
	}

	return 0;
}

