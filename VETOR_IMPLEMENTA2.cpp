/*um programa que solicite 10 valores
ao usuário. Em seguida, apresente o maior valor,
o menos valor, a média, o primeiro valor e o último
o valor.*/


#include <stdio.h>
main(){ //progama que solicite dez valores. Mostrar a media, o maior menor o primeiro e ultimo valor digitado.
int i;

float n[10],l,k,med,som;
som=0; //valor nulo
for (i=0; i<10; i++){//repetidor que guardara os valores dos elementos do vetor

   printf("Digite um numero: ");//solicitando os valores ao usuario
   scanf("%f",&n[i]);
som=som+n[i];  //somando cada valor dos elementos do vetor
}
k=n[0];//o valor base a ser comparado será o primeiro elemento do vetor
l=n[0];
  for ( i=1; i<10; i++){ //implementando uma sequencia a ser comparada
   if(k<n[i])
   k=n[i];
   if(l>n[i])
   l=n[i];
}
med=som/10; //media entre os valores dos elementos do vetor
//apresentando ao usuario menor maior valor, primeiro ultimo a ser digitado e media entre eles
printf("Maior valor:%f\nMenor valor:%f\nMedia:%f\nPRIMEIRO VALOR:%f\nULTIMO VALOR:%f",k,l,med,n[0],n[9]);	
}
