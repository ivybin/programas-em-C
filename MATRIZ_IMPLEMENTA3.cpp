/*Faça um programa que armazene em uma matriz
6x6 os valores definidos pela seguinte equação:

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
  //equacao que resultará nos elementos da matriz e sua respectivas condicoes
  //somando 1 x e j pois foi considerado valores da representação matématica onde linhas e colunas começam de 1
  if (i==j)
  M[i][j] = (i+j+2); 
  if (i>j)
  M[i][j] = (pow(i+1,2)+j+1);
  if (i<j)
  M[i][j] = (pow(i+1,2)+pow(j+1,3));
   
  printf ("%u", M[i][j]); // apresentando ao usuario os valores dos elementos da matriz
  printf("\t");          // separando cada elemento horizontalmente  
  /*pra organizar,se a coluna chegar ao seu valor máximo, pular linha já que o ultimo 
 elemento da linha termina com o valor máximo da coluna*/
 if(j==5)           
  printf("\n");
 } 
}   
