#include <stdio.h>

int main(void)
{
	char *s1, *s2;
	int index = 0, len = 0;

	s1 = "Betty ";
	s2 = "Holberton";

	for (index = 0; s1[index]; index++)
		len++;

	for (index = 0; s2[index]; index++)
		len++;

	printf("%d\n", len);

	return (0);
}
