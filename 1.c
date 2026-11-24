#include <stdio.h>

int main() {

int passos = 0, passos_total = 0, horas = 0;

while (passos_total < 10000) {
printf("Quantos passos vo^ce deu nessa hora? \n");
scanf("%d", &passos);
passos_total = passos_total + passos;
horas++;

}
printf("Meta atingida! Foram necessarias %d horas.\n", horas);
}
