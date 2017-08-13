/*
GadflySu 2017.8.13
*/

/*
Chess

Time Limit: 2000/1000 MS (Java/Others)   Memory Limit: 32768/32768 K (Java/Others)
Problem Description
車是中国象棋中的一种棋子，它能攻击同一行或同一列中没有其他棋子阻隔的棋子。一天，小度在棋盘上摆起了许多車……他想知道，在一共N×M个点的矩形棋盘中摆最多个数的車使其互不攻击的方案数。他经过思考，得出了答案。但他仍不满足，想增加一个条件：对于任何一个車A，如果有其他一个車B在它的上方（車B行号小于車A），那么車A必须在車B的右边（車A列号大于車B）。

现在要问问你，满足要求的方案数是多少。

Input
第一行一个正整数T，表示数据组数。

对于每组数据：一行，两个正整数N和M（N<=1000，M<=1000）。

Output
对于每组数据输出一行，代表方案数模1000000007（1e9+7）。

Sample Input
1
1 1
Sample Output
Copy
1
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

#define INF 0x3f3f3f3f

typedef long long ll;

const int MOD = 1000000007;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a%b); }
int C(int a, int b);

int main() {
	int t, n, m;

	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		int a = max(n, m);
		int b = min(n, m);
		printf("%d\n", C(a, b));
	}

    return 0;
}

int C(int a, int b) {
	ll ans = 1;

	if (b > a/2)
		b = a-b;
    int divB = b;
	for (int i = 1; i <= b; ++i) {
        if (divB >= 1 && ans/divB > 0 && ans%divB == 0) {
            ans /= divB;
            --divB;
        }
		ans = (ans*a != MOD) ? (ans*a)%MOD : ans*a;
		--a;
	}
	for (int i = divB; i >= 1; --i) {
		while (ans/i <= 0 || ans%i != 0)
			ans += MOD;
		ans /= i;
	}

	return (int)ans;
}
