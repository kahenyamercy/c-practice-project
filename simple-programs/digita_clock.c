#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int h, m, s;
	int delay = 1;/*delay in seconds*/

	printf("Set time : \n");
	scanf("%d%d%d", &h, &m, &s);

	if (h > 12 || m > 60 || s > 60)
	{
		printf("Error!\n");
		exit(1);
	}
	while (1)
	{
		printf("\nclock : ");
		printf("\n%02d:%02d:%02d", h, m, s);
		s++;
		if (s > 59)
		{
			m++;
			s = 0;
		}
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if (h > 12)
		{
			h = 1;
		}
		sleep(delay);
		system("clear");
	}
	return (0);
}
