#include <stdio.h>

/**
 * main - prints name of file compiled from
 *
 * Return: (0)
 */
int main(void)
{
	printf("The current file name is %s\n",  __BASE_FILE__);

	return (0);
}
