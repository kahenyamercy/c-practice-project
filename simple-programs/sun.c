#include <stdio.h>
/**
 * main - entry point
 *
 * Description: sum of natural numbers
 */
void main(void)
{
	int input, sum = 0, i;

	printf("Enter a number:");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
		sum += i;
	printf("Sum of %d natural numbers is %d\n", input, sum);
}
