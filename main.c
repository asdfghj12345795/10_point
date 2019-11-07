#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int grade[5];
	int *ptr;
	int sum=0;
	ptr = grade;
	
	int average;
	
	
	for(i=0;i<5;i++)
	{
		printf("input value[%d] = ", i);
		scanf("%d", &grade[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum += *(ptr+i);
	}
	
	average = sum /5;
	
	printf("average : %d", average);
	
	return 0;
}
