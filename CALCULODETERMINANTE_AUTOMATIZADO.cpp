#include<stdio.h>
main(){
int i,x,j=0,z;  //DECLARANDO VARIAVEIS
float mult=1,som=0,M[3][3],D,som_1=0,mult_1=1;
                         
for(i=0;i<6;i++)       // REPETE OS VALORES DAS DIAGONAIS ONDE SERÃO FITAS OPERAÇÕES
 for(x=0; x<3; x++){  //REPETINDO LINHAS
 if(i<3)
	j=(x+i)%3;      //RELAÇÃO ENTRE LINHAS E COLUNAS SENDO QUE O J RESETA PARA NAO ASSUMIR VALORES > 3
 else{	           //RELAÇÃO ENTRE LINHAS E COLUNAS SENDO QUE O J RESETA PARA NAO ASSUMIR VALORES > 3
	z++;		
	j=(x+i+z+5)%3;
 	}
 if(i<3){         //RECEBER VALORES DOS ELEMENTOS DA MATRIZ
 printf("DIGITE O VALOR DO ELEMENTO NA POSICAO:(%d,%d): \n",x+1,j+1);
 scanf("%f",&M[x][j]);
  }
 if(i<3){       //MULTIPLICANDO OS ELEMENTOS DE CADA DIAGONAL
 mult=mult*M[x][j];
 
 if(x==0)
 mult=1*M[x][j];//RESETANDO A MULTIPLICAÇÃO ASSIM QUE X FOR IGUAL A ZERO
 
 if(x==2)
 som=mult+som;
 }
 else{          //MULTIPLICANDO OS ELEMENTOS DE CADA DIAGONAL
 mult_1=mult_1*M[x][j];
 
 if(x==0)
 mult_1=1*M[x][j]; //RESETANDO A MULTIPLICAÇÃO ASSIM QUE X FOR IGUAL A ZERO
 
 if(x==2)
 som_1=mult_1+som_1;
 }
 } 
 D=som+((-1)*som_1);  //SOMANDO O PRODUTO DAS DIAGONAIS DOS ELEMENTOS.
 printf("O determinante da matiz eh:%f",D);//MOSTRANDO AO USUÁRIO O VALOR DO DETERMINANTE
}
