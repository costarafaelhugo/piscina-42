#include <stdio.h>

int main ()
{
	char r;
	char s;
	printf("Digite apenas uma letra: ");
	r = getchar();
	
	printf("Digite outra leta:\n");
	s= getchar();

	scanf(" %c", &s);
	printf("Você digitou a letra \"%c\" e a letra \"%c\".\n", r, s);
}