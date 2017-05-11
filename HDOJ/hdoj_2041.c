/*
超级楼梯

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 58520    Accepted Submission(s): 29750


Problem Description
有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
 

Input
输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。
 

Output
对于每个测试实例，请输出不同走法的数量
 

Sample Input
2
2
3
 

Sample Output
1
2
 

Author
lcy
*/
#include <stdio.h>

int main()
{
	int n, m, i;
	
//	scanf("%d", &n);
//	for (i = 0; i < n; ++i) {
//		scanf("%d", &m);
//		for (m = 2; m < 40; ++m) {
//		int j;
//		long s = 0;
//		--m;
//		for (j = 0; j <= m/2; ++j) {
//			long a = 1, b = 1;
//			int k = m-j;
//			while (k > m-2*j && k > 0)
//				a *= k--;
//			for (k = 1; k <= j; ++k)
//				b *= k;
//			s += a/b;
//		}
//		printf("%ld\n", s);
//		}
//	}

	int arr[41] = {0, 0, 1, 2};

	for (i = 4; i <= 40; ++i) {
		arr[i] = arr[i-2] + arr[i-1];
	}
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		printf("%ld\n", arr[m]);
	}

	return 0;
}
