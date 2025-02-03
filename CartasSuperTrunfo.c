#include <stdio.h>

int main(){
   char cidade[50];
   float populacao;
   double area;
   double PIB;
   int pontos;

   printf("Digite o nome da cidade: \n");
   scanf("%s", &cidade);

   printf("Digite a população da cidade: \n");
   scanf("%f", &populacao);

   printf("Digite a área da cidade: \n");
   scanf("%f", &area);

   printf("Informe o PIB da cidade: \n");
   scanf("%f", &PIB);

   printf("Digite o número de pontos turísticos da cidade: \n");
   scanf("%d", &pontos);

   printf("Nome da cidade: \n %s", cidade);
   printf("população: \n %f", populacao);
   printf("Área: \n %f", area);
   printf("PIB: \n %f", PIB);
   printf("Pontos turísticos: \n %d", pontos);

   return 0;

}
