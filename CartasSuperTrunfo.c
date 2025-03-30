#include <stdio.h>
   int main(){

// Definição da estrutura para armazenar dados das cartas

    char Código;
    float Área;
    char cidade[50];
    int  populaçao; 
    char estado; 
    float PIB;
    int número_pontos_turísticos;

     //CartaSupertTrunfo carta;
     
     // Leitura dos dados da carta

    printf("carta 1: ");
    scanf("%d", &carta.Número); //carta número 1
    
    printf("A: ");
    scanf("%d", &carta.Estado); //Letra do estado

    printf("A01: "); 
    scanf("%d", &carta.Código); //código

    printf("São Paulo: ");
    scanf("%d", &carta.Cidade); //cidade

    printf("12325000 : ");
    scanf("%d", &carta.Populção);// // População em milhões de habitantes

    printf("1521.11km²: ");
    scanf("%d", &carta.Aréa);// Área territorial em km²

    printf("699.28: ");
    scanf("%d", &carta.Pib); //produto interno bruto em bilhões de dólares

    printf("50: ");
    scanf("%d", &carta.Npt); // número de pontos turísticos

    // Impressão dos dados da carta
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Número: %s\n", carta.número);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.código);
    printf("Cidade: %d\n", carta.cidade);
    printf("População: %d\n", carta.população);
    printf("Aréa: %s\n", carta.aréa);
    printf("Pib: %s\n", carta.pib);
    printf("Npt: %s\n", carta.NPT);
    return 0;
}
