#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Demonstrates setting and unsetting
 *              an environment variable using setenv()
 *              and unsetenv() functions.
 *
 * Return: 0 on success, otherwise 1
 */
int main(void)
{
	const char *varName = "MY_VARIABLE";
	const char *varValue = "Hello, World!";

	if (setenv(varName, varValue, 1) == 0)
	{
		printf("Environment variable set successfully.\n");
		printf("%s=%s\n", varName, getenv(varName));
	}
	else
	{
		perror("setenv");
		return (1);
	}

	if (unsetenv(varName) == 0)
	{
		printf("Environment variable unset successfully.\n");
		printf("%s=%s\n", varName, getenv(varName));
	}
	else
	{
		perror("unsetenv");
		return (1);
	}

	return (0);
}
