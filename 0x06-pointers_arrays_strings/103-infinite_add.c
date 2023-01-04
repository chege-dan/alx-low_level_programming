#include "main.h"
/**
* infinite_add - add two numbers to a buffer
* @n1: first string number
* @n2: second string number
* @r: Buffer to store the added numbers
* @size_r: size of the buffer
* Return: The final buffer r or 0 if size is small
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int count1, count2, count3;


for (count1 = 0; r[count1] != '\0' && r[count1] <= size_r; count1++)
{
for (count2 = 0; n1[count2] != '\0'; count2++)
{
for (count3 = 0; n2[count3] != '\0'; count3++)
{
n1[count2] = n2[count3];
count2++;
}
r[count1] = n1[count2];
count1++;
}
return (r);
}
return (0);
}
