#include<stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct ESTRUTURA{
    char nome[40];
    char curso[32];
    int  idade;
    int  codigo;     
    int posicao;
    struct ESTRUTURA *prox;
}estru; //estrutura das listas

estru *no;//declarando o nó cabeca 
int vazio(){ //funcao verifica se tem alguma lista
	if(no==NULL)
	return 1;
	else
	return 0;	
}

void inserir(int x, int y){	   //funçao adiciona uma nova lista
    int i;
	estru *novo= (estru*) malloc(sizeof(estru)); //alocando espaço de memoria para a nova lista
    //PEGANDO OS DADOS DA LISTA DO USUARIO
	printf("IDADE E CODIGO, RESPECTIVAMENTE: \n");
    scanf("%d %d",&x,&y);
    
	char n[40], c[32]; //VETOR AUXILIAR QUE RECEBERA A STRING DO USUARIO
    printf("CURSO:\n");
    scanf("%s",&c);
    
	printf("NOME:\n");
    scanf("%s",&n);
    //PASSANDO AS STRINGS PARA A NOVA LISTA  
	strcpy(novo->nome,n); 
    strcpy(novo->curso,c);
    //PASSANDO OS DADOS INTEIROS PARA A NOVA LISTA      
	novo->idade= x;
	novo->codigo=y;
	novo->prox=no;
	if(no==NULL){	//SE NAO HOUVER LISTAS 			
		no=novo;   //O NO APONTARA PARA A NOVA LISTA, POIS ESTA É A PRIMEIRA
		novo->prox=no;
		novo->posicao=1; //O PRIMEIRO DA LISTA
	}	
	else
	{	
	estru *aux=no;  //AUXILIAR APONTA PRA O PRIMEIRO ELEMENTO		
		for(i=0; ;i++){
			aux=aux->prox;
			if(aux->prox==no)   //LOOP ATE O AUX ACHAR A ULTIMA LISTA
			break;
		}
		
		aux->prox=novo;                //A NOVA LISTA ENTRA POR ULTIMO
		novo->prox=no;                //A NOVA LISTA PASSA A APONTAR PRO PRIMEIRO DA LISTA
		novo->posicao=aux->posicao+1;//MOSTRANDO A POSICAO DO NOVO ELEMENTO
	}	
}
void excluir (int pos){               //FUNCAO EXCLUIR LISTA
	int i;  //DECLARANDO INTEIRO RESPONSAVEL PELO LOOP
	printf("QUAL A POSICAO DA LISTA: \n"); //INDICAR A POSICAO DA LISTA QUE O USUARIO DESEJA EXCLUIR
    scanf("%d",&pos);      //A RECEBENDO
	estru *aux;           //DECLARACAO PONTEIRO AUXILIAR
	aux=no;              // AUXILIAR APONT PARA O CABEÇA
	if(pos==1)   //condicao especial       
	{ 
	aux=no;          
	if(aux->prox=no){//se houver só uma lista
		free(aux);
		printf("NAO HA MAIS LISTAS");
		exit(1);
	}	
	for(i=0; ;i++){ //ATE ENCONTRAR A POSICAO
	aux=aux->prox;
	if(aux->prox==no)
	break;
	              } 
	aux->prox=aux->prox->prox;
	no=no->prox;
	} 
	else
	{       
	while(aux->posicao!=(pos-1)){ //ATE ENCONTRAR A POSICAO
	aux=aux->prox;
	                            };	
	aux->prox=aux->prox->prox;   //PONTEIRO PROX PULANDO O ELEMENTO EXCLUIDO  	           
	} 
	if(aux->prox->posicao!=1)
	aux->prox->posicao--;
}
void listar ()   //FUNCAO MOSTRAR AS LISTAS
{  
    estru *aux;     //DECLARACAO PONTEIRO AUXILIAR
    int i;         //AUXILIAR PARA O LOOP
    aux=no->prox; //APONTA P/ A SEGUNDA LISTA
    
	printf("\nOS VALORES INSERIDOS NA FILA SAO: \n\n");			
            printf("POSICAO: %d| IDADE:%d | CODIGO:%d  |NOME: %s   |",no->posicao,no->idade,no->codigo,no->nome);
            printf("CURSO:%s|\n___________________________________________________________________________ \n",no->curso);
            while (aux!=no){ 
            printf("POSICAO: %d| IDADE:%d | CODIGO:%d  |NOME: %s   |",aux->posicao,aux->idade,aux->codigo,aux->nome);
            printf("CURSO:%s|\n___________________________________________________________________________ \n",aux->curso);            
            aux=aux->prox;  
			}   			
    printf("\n\n");
    	
}
main(){
   //DECLARACAO VARIAVEIS E ATRIBUIÇAO AO NO CABEÇA
   int x,y,pos,c,n;
   no=NULL;
   int op; 
   while(op!=3)//CONDICAO DE SAIDA DO PROGRAMA
   {// menu 
    printf("\n\n_____________________________ \nDADOS ALUNO\n_____________________________                 \n\n");
    printf(" \n1-INSERIR\n2-LISTAR \n3-SAIR \n4-EXCLUIR\n\n"); 

     printf("SELECINE UMA OPCAO: \n");
     scanf("%d",&op);
     system("cls");
switch(op)
 {//chamando as  funcoes
   case 2:
    {
   	    if(vazio()==1){ //
   	    printf("SEM LISTAS");
	    break;	   
	    }
	    else{
	    listar();	 
	    break;	
        }
   	} 
   case 1: inserir(x,y);break;
   case 4: 
   {
   	    if (vazio()==1){
   		printf("SEM LISTAS");
		break;	   
		}
  	    else{
  		excluir(pos);
	    break;
	    }	
   }
   
  
 }  }	
	
}
