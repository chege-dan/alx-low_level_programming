#include <stdio.h>
/**
 * main - Print a fibonacci sequence suming previous 3 numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long num1, num2, num3, sum;
	int counter;

	num1 = 0;
	num2 = 1;
	sum = 0;
	for (counter = 0; counter < 80; counter++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if ((num3 < 4000000) && (num3 % 2 == 0))
			sum = sum + num3;
	}
	printf("%lu\n", sum);
	return (0);
}