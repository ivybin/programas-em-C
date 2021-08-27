#include<stdio.h>
#include<math.h>
#define t 10 //para facilitar os testes
main(){
int i;//declarando variaveis

float med_vet,n[t],som,DP,som_2,k; 

som=0;

for (i=0; i<t; i++){ //para calcular a soma dos valores dos elementos do vetor
printf(": \n");//adicionando valores p/ testar o programa 
scanf("%f",&n[i]);
som=som+n[i];
}
med_vet=som/t;//media da soma dos valores dos vetores

som_2=0;

for (i=0; i<t; i++){ //para calcular o outro somatório

k=pow(n[i]-med_vet,2);
som_2=som_2+k; // responsavel pr somar (x[i] - x)^2

}

DP=sqrt(som_2*(0.5)); //valor de DP pedido

printf("%f\n%f",med_vet,DP);//apresentar ao usuario o valor de DP e média

}

