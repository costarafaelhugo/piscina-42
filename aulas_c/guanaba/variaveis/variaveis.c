#include <stdio.h>

int main() {
	unsigned int  idade;
	idade = 33;

	float peso;
	peso = 85;

	char sexo;
	sexo = 'M';

	char nome [] = "Hugo";

	printf("%s é do sexo %c, tem %i anos e pesa %.2f Kg.\n", nome, sexo, idade, peso);

	return 0;
}