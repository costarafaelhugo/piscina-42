#include <stdio.h>

int main (void)
{
	int tab[3];
	int *ptr;

	tab[0] = 478;
	printf("%p\n", *tab); //isso me dé valor do priemiro elemento da tabela
	return (0);
}