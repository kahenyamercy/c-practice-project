#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, m, rem, rev = 0;

	printf("Enter any number:");
	scanf("%d", &n);

	m = n;

	while (m > 0)
	{
		rem = m % 10;
		m = m / 10;
		rev = rev * 10 + rem;
	}
	if (n == rev)
		printf("%d, is a palindrome\n", n);
	else
		printf("%d, is not a palindrome\n", n);

	return (0);
}
