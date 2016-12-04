/*
ASCII码排序

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 155657    Accepted Submission(s): 62875


Problem Description
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。


Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。


Output
对于每组输入数据，输出一行，字符中间用一个空格分开。


Sample Input
qwe
asd
zxc


Sample Output
e q w
a d s
c x z


Author
lcy
*/

#include <stdio.h>

#define LIM 3

int main()
{
	int c;
	int a[LIM];
	int n = 0;
	
	while ((c = getchar()) !=  EOF) {
		if (c != '\n') {
			a[n++] = c;
			if (n%3 == 0) {
				int i, j;
				
				for (i = 0; i < n; ++i) {
					for (j = i+1; j < n; ++j)
						if (a[i] > a[j]){
							int temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
				}
				for (i = 0; i < n; ++i) {
					putchar(a[i]);
					putchar((i == n-1)? '\n' : ' ');
				}
				n = 0;
			}
		}
	}

	return 0;
}

