#include <stdio.h>

int main() {

float reais = 0, reais_totais = 0;
printf("Insira a quantidade que deseja guardar: R$0.50, R$1.00 ou R$2.00\n");
scanf("%f", &reais);

while (reais != 0 ) {
reais_totais = reais_totais + reais;
printf("Insira a quantidade que deseja guardar: R$0.50, R$1.00 ou R$2.00\n");
scanf("%f", &reais);
}
printf("VocÃª tem %.2f guardados no seu cofre.", reais_totais);
}
