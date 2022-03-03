#include <stdio.h>
#include <stdlib.h>

int main() {
	char x;
	float valor, desc, total;

	printf("\n Digite o valor da compra: ");
	scanf("%f", &valor);

  system("CLS");

	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
	printf("\n (a) azul\n (v) vermelho\n (b) branco");

	printf("\n\n Digite sua opção: ");
	scanf("%s", &x);

	switch(x) {
	case 'a':
		printf("\n Você escolheu a cor azul, seu desconto será de 30%%");
		desc = 30;
		break;

	case 'v':
		printf("\n Você escolheu a cor vermelha, seu desconto será de 20%%");
		desc = 20;
		break;

	case 'b':
		printf("\n Você escolheu a cor branca, seu desconto será de 10%%");
		desc = 10;
		break;

	default:
		printf("\n Opção inválida, não será concedido desconto\n");
		desc = 0;
	}

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

  total = valor - (valor * desc / 100);
	
  printf("\n Valor anterior da compra: %.2f", valor);
	printf("\n O valor final da sua compra é R$ %.2f", total);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");

	return 0;
}