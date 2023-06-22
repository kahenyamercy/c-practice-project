#include <stdio.h>
/**
 * main - entry point
 *
 * Return
 */
int main(void)
{
	int operator;
	int result, num1, num2;

	printf("1. multiplication\n");
	printf("2. division operator\n");
	printf("3. addition operator\n");
	printf("4. subtraction operator\n");

	printf("Enter the operator: ");
	scanf("%d", &operator);

	printf("Enter the value of num1: ");
	scanf("%d", &num1);

	printf("Enter the value of num2: ");
	scanf("%d", &num2);

	switch (operator)
	{
		case 1:
			result = num1 * num2;
			printf("Result: %d\n", result);
			break;

		case 2:
			result = num1 / num2;
			printf("Result: %d\n", result);
			break;

		case 3:
			result = num1 + num2;
			printf("Result: %d\n", result);
			break;

		case 4:
			result = num1 - num2;
			printf("Result: %d\n", result);
			break;

		default:
			printf("Invalid operator\n");
			break;
	}

	return (0);
}
