#include <stdio.h>
int main () {
	char nome [30];
	char ende [40];
	printf ("Digite seu nome: ");
	gets (nome);
	printf ("Seu endereço:\n")
	gets (ende);
	printf ("Você digitou \"%s\".\n", nome);
}