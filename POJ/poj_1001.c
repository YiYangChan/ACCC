/*
Exponentiation
Time Limit: 500MS		Memory Limit: 10000K
Total Submissions: 166864		Accepted: 40480
Description

Problems involving the computation of exact values of very large magnitude and precision are common. For example, the computation of the national debt is a taxing experience for many computer systems.

This problem requires that you write a program to compute the exact value of Rn where R is a real number ( 0.0 < R < 99.999 ) and n is an integer such that 0 < n <= 25.
Input

The input will consist of a set of pairs of values for R and n. The R value will occupy columns 1 through 6, and the n value will be in columns 8 and 9.
Output

The output will consist of one line for each line of input giving the exact value of R^n. Leading zeros should be suppressed in the output. Insignificant trailing zeros must not be printed. Don't print the decimal point if the result is an integer.
Sample Input

95.123 12
0.4321 20
5.1234 15
6.7592  9
98.999 10
1.0100 12
Sample Output

548815620517731830194541.899025343415715973535967221869852721
.00000005148554641076956121994511276767154838481760200726351203835429763013462401
43992025569.928573701266488041146654993318703707511666295476720493953024
29448126.764121021618164430206909037173276672
90429072743629540498.107596019456651774561044010001
1.126825030131969720661201
*/

#include <stdio.h>
#define LIM 1000

void mul(int res[], int *lenOfRes, int a[], int la, int b[], int lb);
void cpArr(int to[], int lenTo, int from[], int lenFrom);
void delZero(int x[], int *len, int *point);
void pDoubleArr(int x[], int len, int point);

int main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		int x[LIM];
		int point, index, len;
		int lenOfRes = 1;
		int result[LIM] = {1};

		// initial
		int i;
		for (i = 0; i < LIM; ++i)
			x[i] = -1;
		i = 0;
		int ptFound = 0;
		do {
			if (c == '.') {
				ptFound = 1;
				point = i;
			}
			else {
				x[i] = c-'0';
				++i;
				if (!ptFound)
					point = i;
			}
		} while ((c = getchar()) != ' ');
		len = i;
		// get the number of decimal places
		point = len-point;                      
		for (i = 0; i < len/2; ++i) {
			int t = x[i];
			x[i] = x[len-1-i];
			x[len-1-i] = t;
		}
		delZero(x, &len, &point);
		
		scanf("%d\n", &index);
//		//test initial & printf Double Arr
//		pDoubleArr(x, len, point);
//		printf(" %d\n", index);
		int ptRes = point;
		*result = 1;
		for (i = 0; i < index; ++i) {
			mul(result, &lenOfRes, result, lenOfRes, x, len);
			ptRes += point;
			delZero(result, &lenOfRes, &ptRes);
		}
		pDoubleArr(result, lenOfRes, point*index);
		putchar('\n');
	}

	return 0;
}

void mul(int res[], int *lenOfRes, int a[], int la, int b[], int lb) {
	int i, j;
	int tRes[LIM] = {0};

	for (i = 0; i < lb; ++i) {
		int ti = i;
		for (j = 0; j < la; ++j) {
			tRes[ti++] += b[i]*a[j];
		}
	}
	for (i = 0; i < LIM; ++i) {
		int t = tRes[i];
		tRes[i] = t%10;
		tRes[i+1] += t/10;
	}
	i = LIM;
	while (tRes[i-1] == 0) {
		tRes[--i] = -1;
	}
	*lenOfRes = i;
	cpArr(res, LIM, tRes, LIM);
}

void cpArr(int to[], int lenTo, int from[], int lenFrom) {
	int i;
	int len = (lenFrom < lenTo) ? lenFrom : lenTo;
	
	for (i = 0; i < len; ++i)
		to[i] = from[i];
	for (i = len; i < lenTo; ++i)
		to[i] = 0;
}

void delZero(int x[], int *len, int *point) {
	// delete zero
	int i = 0;
	while (x[i] == 0 && i < *len)
		++i;
	int zero = i;
	*point -= zero;
	for (i = zero; i < *len; ++i)
		x[i-zero] = x[i];
	for (i = *len-zero; i < *len; ++i)
		x[i] = -1;
	*len -= zero;
	i = *len-1;
	while (x[i] == 0 && i >= 0) {
		x[i] = -1;
		--i;
	}
	*len = i+1;
}

void pDoubleArr(int x[], int len, int p) {
	int i = 0;

	for (i = 0; i < len/2; ++i) {
		int t = x[i];
		x[i] = x[len-1-i];
		x[len-1-i] = t;
	}
	p = len-p;
	if (p < 0) {
		putchar('.');
		int j;
		for (j = 0; j > p; --j)
			printf("0");
	}
	for (i = 0; i < len; ++i) {
		if (i == p) {
			putchar('.');
		}
		printf("%d", x[i]);
	}
	if (p > len) {
		int j;
		for (j = len; j < p; ++j)
			putchar('0');
	}
}
