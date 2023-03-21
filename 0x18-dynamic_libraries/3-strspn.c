/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	char *k = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				j++;
				break;
			}
		if (!(*--accept))
			break;
		accept = k;
	}
	return (j);
}
