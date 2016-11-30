/*
A + B Problem II

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 333277    Accepted Submission(s): 64671


Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.


Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.


Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.


Sample Input
2
1 2
112233445566778899 998877665544332211


Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110


Author
Ignatius.L
*/

#include <stdio.h>
#include <math.h>

#define LIMIT 1001

int a[LIMIT], b[LIMIT], sum[LIMIT];

void getn(int n[]);
void add(int a[], int b[]);
void showx(int n[]);
void swap(int *a, int *b);

int main()
{
	int n, i;
	
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++) {
		getn(a);
		getn(b);
		add(a, b);
		printf("Case %d:\n", i);
		showx(a);
		printf(" + ");
		showx(b);
		printf(" = ");
		showx(sum);
		printf("\n");
		if (i < n)
			printf("\n");
	}
	
	return 0;
}

void getn(int n[])
{
	int c, i;
	
	for (i = 0; i < LIMIT; ++i)
		n[i] = -1;
	while ((c = getchar()) == ' ')
		;
	i = 0;
	while (isdigit(c)) {
		n[i] = c-'0';
		++i;
		c = getchar();
	}
	int l = i;
	for (i = 0; i < l/2; ++i)
		swap(&n[i], &n[l-1-i]);
}

void add(int a[], int b[])
{
	int temp = 0, i;
	
	for (i = 0; i < LIMIT; i++)
		sum[i] = -1;
		
	i = 0;
	while (a[i] != -1 || b[i] != -1) {
		temp += ((a[i] != -1) ? a[i] : 0);
		temp += ((b[i] != -1) ? b[i] : 0);
		sum[i] = temp%10;
		temp /= 10;
		++i;
	}
	if (temp > 0)
		sum[i] = 1;
}

void showx(int x[])
{
	int i, n = 0;
	while (x[n] != -1)
		++n;
	for (i = n-1; i >= 0; --i) {
		printf("%d", x[i]);
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

