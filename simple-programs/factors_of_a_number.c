#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int num, i;

	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			if (i != num)
				printf(",");
			else
				printf("\n");
		}
	}
	return (0);
}
