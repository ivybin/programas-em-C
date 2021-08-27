#include<stdio.h>
//funcao que da o valor do fatorial
void fatorial(int n){ //formulando a função

int k,i; //declarando as variaveis que a funcao usará
printf("DIGITE O VALOR: ",n); //pedindo o valor ao usuario
scanf("%d",&n);

k=1; 

for(i=0;i<n;i++)//repetidor dos valores dos fatorias em sequencia
k=(n-i)*k; //faz o produto entre todos os valores

printf("%d!= %d",n,k);// mostrando ao usuario o resultado do fatorial


} //função main p/ teste sendo chamado de b o valor que o usuario deseja saber o seu fatorial
main(){
int b;
fatorial(b);	
}
