#include <stdio.h>

int main() {
	int n;
	float m;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &n);
	printf("Digite um numero real: ");
	scanf("%f", &m);
	printf("Você acabou de digitar o valor %i. Obrigado.\n", n);
	printf("Você acabou de digitar o valor %.1f. Obrigado.\n", m);
}