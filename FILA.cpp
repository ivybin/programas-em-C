// Jairo Gervasio De Freitas-INSTITUTO FEDERAL do TRIANGULO MINEIRO
// ADAPTAÇÃO Ivys Kalil Silva Almeida-IFMA
//Localização da falha,anual, transformadores de subestação de 100 kV e superiores.
#include <stdio.h>
#include <stdlib.h>

struct FilaDinamica{
    int valor;
    int valor_2;
    int valor_3;
    int valor_4;
    struct FilaDinamica *prox;
};

struct FilaDinamica *inicio, *fim;
int tamanhomaximo = 365;

int filavazia ()
{
    if (inicio == NULL)
        return 1;
    else
        return 0;
}

void inserir (int valor, int x, int y, int z)
{
    struct FilaDinamica *novo;
    novo = (struct FilaDinamica*) malloc (sizeof(struct FilaDinamica));
    novo->valor = valor;
    novo->valor_2 = x;
    novo->valor_3 = y;
    novo->valor_4 = z;
    novo->prox = NULL;
    if (fim == NULL){
	inicio = novo;
	printf("%d %d",&inicio,&novo);}      
    else
        fim->prox = novo;
    fim = novo;
}

void remover ()
{
    int removido,removido_2,removido_3;
    struct FilaDinamica *aux;
    aux = inicio;
    removido = inicio->valor;
    removido_2 = inicio->valor_2;
    removido_3 = inicio->valor_3;
    inicio = inicio->prox;
    if (inicio == NULL)
        fim = NULL;
    printf("\nA falha do dia: %d/%d/%d foi removida", removido,removido_2,removido_3);
    free(aux);
}

void listar ()
{
    struct FilaDinamica *aux;
    aux = inicio;
    printf("\nOs valores inseridos na fila sao: ");
    while(aux != NULL)
    {
        printf("\nDIA:%d/%d/%d\n", inicio->valor,inicio->valor_2,inicio->valor_3);
			  switch(inicio->valor_4){
			  case 1:
			  printf("A FALHA FOI MECANICA");
			  break;	
			  case 2:
			  printf("A FALHA FOI ELETRICA");
			  break;	
			  case 3:
			  printf("A FALHA FOI DESCONHECIDA");
			  break;	
			  case 4:
			  printf("A FALHA FOI DIELETRICA");	
			  break;
			  case 5:
			  printf("A FALHA FOI TERMICA");
			  break;	
			  case 6:
			  printf("A FALHA FOI FISICO-QUIMICA");	
			  break;
			  }
        aux = aux->prox;
    }
    printf("\n\n");
}

 main()
{
    int opcao, valor,valor_2,valor_3,valor_4,tamanhoatual;
    inicio = NULL;
    fim = NULL;
    opcao = 0;
    tamanhoatual = 0;

    while (opcao != 6)
    {
        printf("\nEscolha uma opcao:");
        printf("\n1 - Inserir um valor na fila");
        printf("\n2 - Remover um valor da fila");
        printf("\n3 - Mostrar o inicio da fila");
        printf("\n4 - Mostrar o fim da fila");
        printf("\n5 - Listar os elementos da fila");
        printf("\n6 - Sair do programa");
        printf("\nOpcao escolhida: ");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            if (tamanhoatual < tamanhomaximo)
            {
                printf("\nQual o DIA da ocorencia: ");
                scanf("%d",&valor);
                printf("\nQual o MES da ocorencia: ");
                scanf("%d",&valor_2);
                printf("\nQual o ANO da ocorencia: ");
                scanf("%d",&valor_3);
                printf("1-mecanico\n2-eletrico\n3-desconhecido\n4-dieletrico\n5-termico\n6-fisico-quimico\nDIGITE A FALHA: ");
                scanf("%d",&valor_4);
                printf("\n\n");
                inserir(valor,valor_2,valor_3,valor_4);
                tamanhoatual++;
            }
            else
                printf("\nFila cheia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 2:
            if (filavazia()== 0)
            {
                remover();
                tamanhoatual--;
            }
            else
                printf("\nFila vazia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 3:
            if (filavazia()== 0){
			printf("\nO O dia no inicio da fila foi: %d/%d/%d\n", inicio->valor,inicio->valor_2,inicio->valor_3);
			  switch(inicio->valor_4){
			  case 1:
			  printf("A FALHA FOI MECANICA");
			  break;	
			  case 2:
			  printf("A FALHA FOI ELETRICA");
			  break;	
			  case 3:
			  printf("A FALHA FOI DESCONHECIDA");
			  break;	
			  case 4:
			  printf("A FALHA FOI DIELETRICA");	
			  break;
			  case 5:
			  printf("A FALHA FOI TERMICA");
			  break;	
			  case 6:
			  printf("A FALHA FOI FISICO-QUIMICA");	
			  break;
			  }
			}               
            else
                printf("\nFila vazia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 4:
            if (filavazia()== 0){
			printf("\nO O dia no inicio da fila foi: %d/%d/%d\n", inicio->valor,inicio->valor_2,inicio->valor_3);
			  switch(inicio->valor_4){
			  case 1:
			  printf("A FALHA FOI MECANICA");
			  break;	
			  case 2:
			  printf("A FALHA FOI ELETRICA");
			  break;	
			  case 3:
			  printf("A FALHA FOI DESCONHECIDA");
			  break;	
			  case 4:
			  printf("A FALHA FOI DIELETRICA");	
			  break;
			  case 5:
			  printf("A FALHA FOI TERMICA");
			  break;	
			  case 6:
			  printf("A FALHA FOI FISICO-QUIMICA");	
			  break;
			  }
            	
			}
            else
                printf("\nFila vazia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 5:
            if (filavazia()== 0)
                listar();
            else
                printf("\nFila vazia - Nao foi possivel executar essa operacao\n\n");
            break;
        }
    }
}
