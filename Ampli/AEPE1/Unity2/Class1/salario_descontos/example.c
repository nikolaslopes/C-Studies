#include <stdio.h>
#include <stdlib.h>

int main() {
  float salario_bruto = 0, salario_liquido = 0, desconto_inss = 0, desconto_ir = 0, desconto_alelo = 20, desconto_saude = 100, total_descontos = 0;

  system("PAUSE");
  system("CLS");

  printf("\n\n ***** Cálculo de Salário Líquido com descontos na folha de pagamento *****\n");
  printf("\n Digite o valor do seu salário: ");
  scanf("%f", &salario_bruto);

  // Cálculo do desconto do INSS
  if (salario_bruto <= 1045.0) {
    desconto_inss = salario_bruto * 0.075;
  } else if (salario_bruto <= 2089.60) {
    desconto_inss = salario_bruto * 0.09;
  } else if (salario_bruto <= 3134.40) {
    desconto_inss = salario_bruto * 0.12;
  } else {
    desconto_inss = salario_bruto * 0.14;
  }

  // Cálculo do desconto do IR
  if (salario_bruto <= 1903.98) {
    desconto_ir = 0;
  } else if (salario_bruto <= 2826.65) {
    desconto_ir = salario_bruto * 0.075;
  } else if (salario_bruto <= 3751.05) {
    desconto_ir = salario_bruto * 0.15;
  } else if (salario_bruto <= 4664.68) {
    desconto_ir = salario_bruto * 0.225;
  } else {
    desconto_ir = salario_bruto * 0.275;
  }

  salario_liquido = salario_bruto - desconto_inss - desconto_ir;
  total_descontos = desconto_inss + desconto_ir + desconto_alelo + desconto_saude;

  system("PAUSE");
  system("CLS");

  printf("\n Salário bruto: R$ %.2f", salario_bruto);
  printf("\n\n Descontos ");
  printf("\n INSS: R$ %.2f", desconto_inss);
  printf("\n IR: R$ %.2f", desconto_ir);
  printf("\n Refeição: R$ %.2f", desconto_alelo);
  printf("\n Saúde: R$ %.2f", desconto_saude);
  printf("\n\n Total de descontos: R$ %.2f", total_descontos);
  printf("\n\n Salário líquido: R$ %.2f", salario_liquido);

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}