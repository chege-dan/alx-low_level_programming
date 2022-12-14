#include <stdio.h>
/**
 * main - prints natural numbers divisible by 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int number, sum;

	sum = 0;
	for (number = 0; number <= 1024; number++)
	{
		if (((number % 3) == 0) || ((number % 5) == 0))
			sum = sum + number;
	}
	printf("%d\n", sum);
	return (0);
}