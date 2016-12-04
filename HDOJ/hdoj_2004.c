/*
�ɼ�ת��

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 135531    Accepted Submission(s): 58887


Problem Description
����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;


Input
���������ж��飬ÿ��ռһ�У���һ��������ɡ�


Output
����ÿ���������ݣ����һ�С�����������ݲ���0~100��Χ�ڣ������һ�У���Score is error!����


Sample Input
56
67
100
123


Sample Output
E
D
A
Score is error!


Author
lcy
*/

#include <stdio.h>

int main()
{
	int score;
	
	while (scanf("%d", &score) == 1) {
		if (score >= 0 && score <= 100) {
			switch (score/10) {
			case 10 : case 9 :
				printf("A\n");
				break;
			case 8 :
				printf("B\n");
				break;
			case 7 :
				printf("C\n");
				break;
			case 6 :
				printf("D\n");
				break;
			case 5 : case 4 : case 3 : case 2 : case 1 : case 0 :
				printf("E\n");
				break;
			default :
				printf("Score is error!\n");
			}
		} else
			printf("Score is error!\n");
	}

	return 0;
}

