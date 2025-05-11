#include <stdio.h>

int main(){
char estado1[20], estado2[20],carta1[20], carta2[20],cidade1[20], cidade2[20];
int pontos1, pontos2;
float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2;
unsigned int populacao1, populacao2, superpoder1, superpoder2;

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

densidade1 =  populacao1 / area1;
pibcapita1 =  pib1 / populacao1;

superpoder1 = (float) populacao1+area1+pib1+pontos1+pibcapita1+(1/densidade1);


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

densidade2 =  populacao2 / area2;
pibcapita2 =  pib2 / populacao2;

superpoder2 = (double) populacao2+area2+pib2+pontos2+pibcapita2+(1/densidade2);

//Mostra os dados coletados da Carta 1
printf("Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", carta1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d mil habitantes\n", populacao1);
printf("Área: %0.2f mil km²\n", area1);
printf("PIB: %0.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);
printf("A Densidade Populacional é: %.2f hab/km²\n", densidade1);
printf("O PIB per capita é: R$%.2f\n", pibcapita1);
printf("O Super poder dessa carta é: %u\n", superpoder1);

//Mostra os dados coletados da Carta 2
printf("Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", carta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d mil habitantes\n", populacao2);
printf("Área: %0.2f mil km²\n", area2);
printf("PIB: %0.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("A Densidade Populacional é: %.2f hab/km²\n", densidade2);
printf("O PIB per capita é: R$%.2f\n", pibcapita2);
printf("O Super poder dessa carta é: %u\n", superpoder2);

printf("A população da Carta 1 (%d mil habitantes) é maior que o da Carta 2 (%d mil habitantes)? %d\n",populacao1, populacao2, populacao1 > populacao2);
printf("A Área da Carta 1 (%.2f mil km²) é maior que o da Carta 2 (%.2f mil km²)? %d\n", area1, area2, area1>area2);
printf("O PIB da Carta 1 (%.2f bilhões de reais) é maior que o da Carta 2 (%.2f bilhões de reais)? %d\n",pib1,pib2,pib1>pib2);
printf("O número de pontos túristicos da Carta 1 (%d) é maior que o da Carta 2 (%d)? %d\n",pontos1,pontos2,pontos1>pontos2);
printf("A Densidade Populacional da Carta 1 (%.2f hab/km²) é maior que o da Carta 2 (%.2f hab/km²)? %d\n",densidade1,densidade2,densidade1<densidade2);
printf("O PIB/capita da Carta 1 (R$%.2f) é maior que o da Carta 2 (R$%.2f): %d\n",pibcapita1,pibcapita2,pibcapita1>pibcapita2);
printf("O Super poder da Carta 1 (%u) é maior que o da Carta 2 (%u)? %d",superpoder1,superpoder2,superpoder1>superpoder2);


    return 0;
}
