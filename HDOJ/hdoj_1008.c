/*
Elevator

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 67246    Accepted Submission(s): 36998


Problem Description
The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.

For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.


Input
There are multiple test cases. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100. A test case with N = 0 denotes the end of input. This test case is not to be processed.


Output
Print the total time on a single line for each test case.


Sample Input
1 2
3 2 3 1
0


Sample Output
17
41


Author
ZHENG, Jianqiang
*/

#include <stdio.h>

#define UP_TM	6
#define DOWN_TM	4
#define STAY_TM 5

int main()
{
	int n, i;
	
	scanf("%d", &n);
	while (n != 0) {
		int status = 0;
		long int t = 0;
		int aim;

		for (i = 0; i < n; ++i) {
			scanf("%d", &aim);
			if (aim > status)
				t += (aim-status)*UP_TM;
			else if (aim < status)
				t += (status-aim)*DOWN_TM;
			t += STAY_TM;
			status = aim;
		}
		printf("%ld\n", t);
		scanf("%d", &n);
	}	
	
	return 0;
}

