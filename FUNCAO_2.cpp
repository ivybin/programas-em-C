#include<stdio.h>
#include<math.h>
int fatorial(int n); //escopo da funcao fatorial
void y(int x, int po); //escopo da funcao f(x)


main(){ //teste da fun��o

  int j,k;
  y(j,k); //usando a fun��o que fornece o valor de f(x)

}

//funcao que da o valor do fatorial
int fatorial(int n){ //formulando a fun��o

int k,i; //declarando as variaveis que a funcao usar�

k=1; 

for(i=0;i<n;i++)//repetidor dos valores dos fatorias em sequencia
k=(n-i)*k; //faz o produto entre todos os valores


return(k); //retornando o resultado do fatorial
}
//funcao f(x)
void y(int x, int po){
	int z; //declarando as vari�veis

float d;
//recebendo valores de x e o grau da fun��o ou sisplesmente a maior potencia de x
printf("Digite o valor de x: ");
scanf("%d",&x);
printf("Digite o grau da funcao: ");
scanf("%d",&po);

for(z=1;z<=po;z++){ //sequencia da potencia at� o grau da fun��o

d=(pow(x,z)/fatorial(z-1))+d;//far� as opera��es em conjunto
}
printf("%f",d);	//mostra o valor de f(x) 

}
