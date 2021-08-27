#include<stdio.h>
#include<math.h>
int fatorial(int n); //escopo da funcao fatorial
void y(int x, int po); //escopo da funcao f(x)


main(){ //teste da função

  int j,k;
  y(j,k); //usando a função que fornece o valor de f(x)

}

//funcao que da o valor do fatorial
int fatorial(int n){ //formulando a função

int k,i; //declarando as variaveis que a funcao usará

k=1; 

for(i=0;i<n;i++)//repetidor dos valores dos fatorias em sequencia
k=(n-i)*k; //faz o produto entre todos os valores


return(k); //retornando o resultado do fatorial
}
//funcao f(x)
void y(int x, int po){
	int z; //declarando as variáveis

float d;
//recebendo valores de x e o grau da função ou sisplesmente a maior potencia de x
printf("Digite o valor de x: ");
scanf("%d",&x);
printf("Digite o grau da funcao: ");
scanf("%d",&po);

for(z=1;z<=po;z++){ //sequencia da potencia até o grau da função

d=(pow(x,z)/fatorial(z-1))+d;//fará as operações em conjunto
}
printf("%f",d);	//mostra o valor de f(x) 

}
