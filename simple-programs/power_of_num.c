#include <stdio.h>
/**
 * main - entry point
 *
 */
void main(void)
{
	int a, b, result = 1, i;

	printf("Enter value of a:");
	scanf("%d", &a);

	printf("Enter value of b:");
	scanf("%d", &b);

	for (i = 1; i <= b; i++)
	{
		result *= a;
	}
	printf("%d power %d = %d\n", a, b, result);
}
