/*Fa�a um programa que armazene em uma matriz
6x6 os valores definidos pela seguinte equa��o:

Aij = i + j, se i == j
Aij =(i^2 / 2)+ j, se i > j
Aij = (i^3/2) + j, se i < j



*/
#include<stdio.h>
#include<math.h>
main(){ 
//declarando variaveis
int i,j;
unsigned int M[6][6];//declarando matriz
for ( i=0; i<6; i++)       //contando valores de linha      
 for ( j=0; j<6; j++) {   // contando valores de colunas         
  //equacao que resultar� nos elementos da matriz e sua respectivas condicoes
  //somando 1 x e j pois foi considerado valores da representa��o mat�matica onde linhas e colunas come�am de 1
  if (i==j)
  M[i][j] = (i+j+2); 
  if (i>j)
  M[i][j] = (pow(i+1,2)+j+1);
  if (i<j)
  M[i][j] = (pow(i+1,2)+pow(j+1,3));
   
  printf ("%u", M[i][j]); // apresentando ao usuario os valores dos elementos da matriz
  printf("\t");          // separando cada elemento horizontalmente  
  /*pra organizar,se a coluna chegar ao seu valor m�ximo, pular linha j� que o ultimo 
 elemento da linha termina com o valor m�ximo da coluna*/
 if(j==5)           
  printf("\n");
 } 
}   
