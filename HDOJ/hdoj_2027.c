/*
????

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 70552    Accepted Submission(s): 27900


Problem Description
???????????????????


Input
????????????n,?????????,???n??????100?????


Output
??????????5?,????:
a:num1
e:num2
i:num3
o:num4
u:num5
????????????????

?????:????????????:)


Sample Input
2
aeiou
my name is ignatius


Sample Output
a:1
e:1
i:1
o:1
u:1

a:2
e:1
i:3
o:0
u:1


Author
lcy
*/
#include <stdio.h>

int main()
{
	int n, i;
	int c;

	scanf("%d\n", &n);
	c = getchar();
	for (i = 0; i < n; ++i) {
		int a[5] = {0};
		while (c != '\n') {
			if (c == 'a' || c == 'A')
				++a[0];
			else if (c == 'e' || c == 'E')
				++a[1];
			else if (c == 'i' || c == 'I')
				++a[2];
			else if (c == 'o' || c == 'O')
				++a[3];
			else if (c == 'u' || c == 'U')
				++a[4];
			c = getchar();
		}
		int j;
		for (j = 0; j < 5; ++j) {
			switch (j) {
				case 0 :
					printf("a:%d\n", a[j]);
					break;
				case 1 :
					printf("e:%d\n", a[j]);
					break;
				case 2 :
					printf("i:%d\n", a[j]);
					break;
				case 3 :
					printf("o:%d\n", a[j]);
					break;
				case 4 :
					printf("u:%d\n", a[j]);
					break;
			}
		}
		if ((c = getchar()) != EOF)
			putchar('\n');
	}

	return 0;
}

