#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 10

typedef struct {
char Marca[20];
char Modelo[20];
int Ano_fabricacao;
char Placa[10];}
Veiculo;
Veiculo veic[TAM];Veiculo aux;

int main() {
int i,x,y,z, ano = 0, cont = 0, opcao = 0, sum, sum2, sum3;
int ano_fabri[TAM];   char modelo[20];
setlocale(LC_ALL,"portuguese");


while(-1 != 0) {
if(cont < TAM) {
printf("\n  --------------- Sistema de cadastro de veiculos --------------- \n");
printf(" \n 1. Cadastrar novo veiculo ");
printf(" \n 2. Veiculos cadastrados ");
printf(" \n 3. Buscar por ano de fabricação ");
printf(" \n 4. Buscar por modelo ");
printf(" \n 5. Busca por ano acima de ");
printf(" \n 6. Sair \n");

printf("-----------------------------------------------------------------");}
else
{
printf("  --------------- Sistema de cadastro de veiculos --------------- \n");
printf(" \n 2. Veiculos cadastrados ");         printf(" \n 3. Buscar por ano de fabricação ");
printf(" \n 4. Buscar por modelo ");         printf(" \n 5. Buscar por ano acima de\n");
printf(" \n 6. Sair \n");
printf("-----------------------------------------------------------------");
}
printf(" \n Digite o número da opção desejada: ");    scanf("%d", &opcao);

switch (opcao) {  

case 1:
if(cont < TAM) {
printf("\n");
printf(" Digite a marca do veiculo: ");
 scanf("%s", &veic[cont].Marca);
printf(" Digite o modelo do veiculo: ");
scanf("%s", &veic[cont].Modelo);
printf(" Digite o ano de fabricação do veiculo (XXXX): ");
scanf("%d", &veic[cont].Ano_fabricacao);
 printf(" Digite a placa do veiculo (ABC-1234): ");
scanf("%s", &veic[cont].Placa);
while (strlen(veic[cont].Placa) != 8) {
printf("Placa inválida! Digite conforme o exemplo: ");
scanf("%s", &veic[cont].Placa);
}

cont +=
printf("\n");
printf("   ------------Veiculo cadastrado com sucesso! -----------\n\n\n\n");

}else { printf("\n ----------------- Limite máximo de cadastro atingido! ------------------\n\n\n\n\n");
}
break;


case 2:
for(i =  1 ; i < cont; i++){
for(y = 0; y < cont - 1; y++){
if (veic[y].Ano_fabricacao > veic[y+1].Ano_fabricacao){
 aux = veic[y];
veic[y] = veic[y+1];
veic[y+1] = aux;
 }
}
}
for(x = 0; x < cont; x++){
printf("\nMarca:%s", veic[x].Marca);
printf("\nModelo:%s", veic[x].Modelo);
printf("\nAno de fabricação:%d", veic[x].Ano_fabricacao);
printf("\nPlaca:%s\n", veic[x].Placa);
}
printf("\n\n\n");
system ("\n\npause");
 break;

case 3:
sum2 = 0;
printf("\nDigite o ano de fabricação: ");
scanf("%d", &ano);
for(z = 0; z < cont; z++){
if(ano == veic[z].Ano_fabricacao){
printf("\nMarca:%s", veic[z].Marca);
printf("\nModelo:%s", veic[z].Modelo);
printf("\nAno de fabricação:%d", veic[z].Ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[z].Placa);
sum2 ++;
}
}
if (sum == 0){
printf("\n   --------------- Veiculo não encontrado. --------------------\n\n\n");
 }
system ("\n\npause");
break;



case 4:
sum = 0;
printf("\nDigite o modelo do veiculo: ");
 scanf("%s", &modelo);
for(i = 0; i <= cont; i++){
 if(!strcmp(modelo, veic[i].Modelo)){
printf("\nMarca:%s", veic[i].Marca);
printf("\nModelo:%s", veic[i].Modelo);
 printf("\nAno de fabricação:%d", veic[i].Ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[i].Placa);
sum ++;
}
}if (sum == 0){
printf("\n   ---------------- Veiculo não encontrado. ---------------------\n\n\n");
}
system ("\n\npause");
 break;  

case 5:
sum3 = 0;
printf("\nBuscar por ano acima de: ");
scanf("%d", &ano);
for(i = 0; i < cont; i++){
if(ano <= veic[i].Ano_fabricacao){
printf("\nMarca:%s", veic[i].Marca);
printf("\nModelo:%s", veic[i].Modelo);
printf("\nAno de fabricação:%d", veic[i].Ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[i].Placa);
sum3 ++;
}
}if (sum3 == 0){
printf("\n   --------------Veiculo não encontrado. ----------------------\n\n\n");
}
system ("\n\npause");
break;


case 0:
printf ("\n   -----------------Programa Finalizado-------------------\n\n\n\n\n");
exit(0);
break;
default:
printf(" \n Você digitou uma opção inválida!");
break;
}   }
return 0;
}
