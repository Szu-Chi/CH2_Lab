#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5() {
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp = 4;
	int temp2 = 5;
	temp = 1;
	temp2 = 8;
	temp = 9;
	printf("(5) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", sign);
			}
			else if (j == temp)
			{
				temp--;
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}