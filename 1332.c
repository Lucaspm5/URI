#include <stdio.h>
#include <string.h>

unsigned short auxiliar(char *);

int main ()
{

	unsigned short i;
	unsigned short n;
	char string[10];

	scanf("%hu", &n);

	for (i = 0; i < n; ++i)
	{

		scanf("%s", string);

		if (strlen(string) == 5)
			printf("3\n");
		else if (auxiliar(string) >= 2)
			printf("1\n");
		else
			printf("2\n");

	}

}

unsigned short auxiliar(char *string)
{

	char *cmp = "one";
	unsigned short i, j;
	unsigned short contador = 0;

	i = j = 0;
	while (string[i])
		if (string[i++] == cmp[j++])
			++contador;

	return contador;

}