#include <stdio.h>
/**
 * main - Print fibonacci numbers up 98
 * Return: Always 0
 */
int main(void)
{
	int counter;
	unsigned long num1, num2, sum;

	num1 = 0;
	num2 = 1;

	for (counter = 0; counter < 98; counter++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (counter < 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
