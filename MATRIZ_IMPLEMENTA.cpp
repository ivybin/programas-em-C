/*algoritmo que armazene os valores
de uma matriz A definidos pela seguinte equa��o:

Aij = (i + j)/2


Em seguida, apresente ao usu�rio a matriz.*/


#include<stdio.h>
main(){ 
int i,j,b,z;//declarando variaveis
//recebendo a dimencao da matriz do usuario
printf("Digite o numero de linha(s) e coluna(s) respectivamente: ");
scanf("%d%d",&b,&z);
 
float M[b][z];//declarando a matriz abaixo pois ela ainda ia receber valores de linhas e colunas

for ( i=0; i<b; i++)       //contando valores de linha      
 for ( j=0; j<z; j++) {   // contando valores de colunas         
  //equacao que resultar� nos elementos da matriz
  M[i][j] = (i+j+2)*0.5; 
  //somando 2 pois foi considerado valores da representa��o mat�matica onde linhas e colunas come�am de 1 
  printf ("%f", M[i][j]); // apresentando ao usuario os valores dos elementos da matriz
  printf("\t");          // separando cada elemento horizontalmente pois sao valores do tipo float 
  /*pra organizar,se a coluna chegar ao seu valor m�ximo, pular linha j� que o ultimo 
 elemento da linha termina com 
 o valor m�ximo da coluna*/
 if(j==(z-1))           
  printf("\n");
 } 
}   
