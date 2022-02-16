#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  struct noDaLista{
  char titulo[50];
  char autor[50];
  int ano;
  int qtd;
  struct noDaLista *prox;
 };

 typedef struct noDaLista lista;
 lista *primeiro;
 int tam = 0;

 void adicionarLivros(){
     lista *noDaLista = malloc(sizeof(lista));
     printf("\nTitulo:");
     fgets(noDaLista->titulo,50,stdin);
     printf("\nAutor:");
     fgets(noDaLista->autor,50,stdin);
     printf("\nAno:");
     scanf("%d", &noDaLista->ano);
     printf("\nQuantidade:");
     scanf("%d", &noDaLista->qtd);
    getchar();
     noDaLista->prox = primeiro;
     primeiro = noDaLista;
     tam++;
     }

 void imprimirLivros(lista *noDaLista){
     if(noDaLista != NULL){
       printf("\n %s \n%s \n%d \n%d", noDaLista->titulo, noDaLista->autor,
       noDaLista->ano, noDaLista->qtd);
       imprimirLivros(noDaLista->prox);
     }
  } 
   
 int quantidadeLivros(lista *noDaLista){
     int aux=0;
  while(noDaLista != NULL){
       aux = aux + (noDaLista->qtd);
       noDaLista = noDaLista->prox;
       }
  return aux;
}  
 
int main() {
  
   adicionarLivros();
   adicionarLivros();
   adicionarLivros();
   imprimirLivros(primeiro);
   quantidadeLivros(primeiro);
   
  
  return 0;
}