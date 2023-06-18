#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a[9], i;
	
	printf("Enter array of size 9 to be reversed:\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		printf("Original order:%d ", a[i]);
	}
	printf("\n");
	for (i = 8; i >= 0; i--)
	{
		printf("Reverse:%d ", a[i]);
	}
	return (0);
}
