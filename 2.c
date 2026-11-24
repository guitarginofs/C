#include <stdio.h>

int main() {

int avaliacao = 0, avaliacao_final = 0, media = 0, contador = 1;
while (contador <= 10 ) {
printf("Insira sua avaliação de atendimento: \n");
scanf("%d", &avaliacao);
avaliacao_final = avaliacao_final + avaliacao;
contador++;
}

media = avaliacao_final / 10;

if (media < 7) {
    printf("Alerta!! Média de atendimento baixa!");
} else {
    printf("OK!");
}
}
