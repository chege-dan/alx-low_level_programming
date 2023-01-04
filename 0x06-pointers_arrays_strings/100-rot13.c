#include "main.h"
/**
* rot13 - Encode using rot13
* @string: pointer to string to be encoded
* Return: String encoded
*/
char *rot13(char *string)
{
int count1, count2;
char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (count1 = 0; string[count1] != '\0'; count1++)
{
for (count2 = 0; count2 <= 51; count2++)
{
if (string[count1] == s1[count2])
{
string[count1] = s2[count2];
break;
}
}
}
return (string);
}
