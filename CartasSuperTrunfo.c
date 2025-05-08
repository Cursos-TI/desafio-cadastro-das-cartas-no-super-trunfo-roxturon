#include <stdio.h>

int main(){
char estado1[20], estado2[20];
char carta1[5], carta2[5];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

printf("Carta 1: \n");

//Coleta o nome do estado
printf("Digite o estado: ");
scanf("%s", &estado1);

//Coleta o código da carta com uma letra inicial seguida de número(s)
printf("Digite o código da carta: ");
scanf("%s", &carta1);

//Coleta o nome da cidade
printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

//Coleta um número inteiro da população da cidade
printf("Digite a população da cidade: ");
scanf("%d", &populacao1);

//Coleta um número decimal do tamanho da Área
printf("Digite a Área: ");
scanf("%f", &area1);

//Coleta um número decimal do valor do PIB
printf("Digita o PIB: ");
scanf("%f", &pib1);

//Coleta o número inteiro de pontos turísticos
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos1);


printf("Carta 2: \n");

//Coleta o nome do estado
printf("Digite o estado: ");
scanf("%s", &estado2);

//Coleta o código da carta com uma letra inicial seguida de número(s)
printf("Digite o código da carta: ");
scanf("%s", &carta2);

//Coleta o nome da cidade
printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

//Coleta um número inteiro da população da cidade
printf("Digite a população da cidade: ");
scanf("%d", &populacao2);

//Coleta um número decimal do tamanho da Área
printf("Digite a Área: ");
scanf("%f", &area2);

//Coleta um número decimal do valor do PIB
printf("Digita o PIB: ");
scanf("%f", &pib2);

//Coleta o número inteiro de pontos turísticos
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos2);

//Mostra os dados coletados da Carta 1
printf("Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", carta1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %0.2f km²\n", area1);
printf("PIB: %0.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);

//Mostra os dados coletados da Carta 2
printf("Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", carta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %0.2f km²\n", area2);
printf("PIB: %0.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);



    return 0;
}