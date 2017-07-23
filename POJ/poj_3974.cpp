/*
Palindrome
Time Limit: 15000MS		Memory Limit: 65536K
Total Submissions: 9579		Accepted: 3605
Description

Andy the smart computer science student was attending an algorithms class when the professor asked the students a simple question, "Can you propose an efficient algorithm to find the length of the largest palindrome in a string?" 

A string is said to be a palindrome if it reads the same both forwards and backwards, for example "madam" is a palindrome while "acm" is not. 

The students recognized that this is a classical problem but couldn't come up with a solution better than iterating over all substrings and checking whether they are palindrome or not, obviously this algorithm is not efficient at all, after a while Andy raised his hand and said "Okay, I've a better algorithm" and before he starts to explain his idea he stopped for a moment and then said "Well, I've an even better algorithm!". 

If you think you know Andy's final solution then prove it! Given a string of at most 1000000 characters find and print the length of the largest palindrome inside this string.
Input

Your program will be tested on at most 30 test cases, each test case is given as a string of at most 1000000 lowercase characters on a line by itself. The input is terminated by a line that starts with the string "END" (quotes for clarity). 
Output

For each test case in the input print the test case number and the length of the largest palindrome. 
Sample Input

abcbabcbabcba
abacacbaaaab
END
Sample Output

Case 1: 13
Case 2: 6
*/
#include <stdio.h>
#include <string.h>

const int MAXN = 1100100;
char ma[MAXN*2];
int mp[MAXN*2];

int min(int a, int b) {
	if (a < b)
		return a;
	else
	        return b;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

void Manacher(char s[], int len) {
	int l = 0;
	ma[l++] = '$';
	ma[l++] = '#';
	for (int i = 0; i < len; i++) {
		ma[l++] = s[i];
		ma[l++] = '#';
	}
	ma[l] = 0;
	int mx = 0, id = 0;
	for (int i = 0; i < l; i++) {
		mp[i] = mx > i ? min(mp[id*2 - i], mx-i) : 1;
		while (ma[i + mp[i]] == ma[i - mp[i]])
			mp[i]++;
		if (i + mp[i] > mx) {
			mx = i + mp[i];
			id = i;
		}
	}
}

/*
 * abaaba
 * i: 0 1 2 3 4 5 6 7 8 9 10 11 12 13
 * ma[i]: $ # a # b # a # a $ b # a #
 * mp[i]: 1 1 2 1 4 1 2 7 2 1 4 1 2 1
 */
char s[MAXN];
int main()
{
	int no = 0;
	while (scanf("%s", s) == 1 && strcmp(s, "END")) {
		int len = strlen(s);
		Manacher(s, len);
		int ans = 0;
		for (int i = 0; i < len*2 + 2; i++)
			ans = max(ans, mp[i]-1);
		printf("Case %d: %d\n", ++no, ans);
	}
	
	return(0);
}

