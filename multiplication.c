#include <stdio.h>
/**
 * main - entry point
 * description: carry out multiplication of a number
 *
 * Return: void
 */
void main(void)
{
    int input_num, i;

    printf("Enter a number:");
    scanf("%d", &input_num);

    for (i = 0; i <= 10; i++)
    {
        printf("\n%dx%d=%d", input_num, i, input_num * i);
    }
}