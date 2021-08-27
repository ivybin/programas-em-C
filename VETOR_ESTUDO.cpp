/*programa que leia 10 números inteiros
e os armazene em um vetor. Imprima o vetor, o
maior elemento e a posição que ele se encontra.*/



#include<stdio.h>
main(){
int i,b,n[10],k;

for (i=0; i<10; i++){//repetidor que guardara os valores dos elementos do vetor
//solicitando os valores dos elementos do vetor ao usuario
printf("Digite um numero: ");
scanf("%d",&n[i]);

}

for ( i=1; i<10; i++){ //implementando uma sequencia a ser comparada

if(k<n[i]){

k=n[i];
b=i+1; //desígna a posição do vetor. Somando +1 pois será fornecido no padrao matemático
} 
}
printf("MAIOR VALOR:%d\nPOSICAO DO MAIOR VALOR:%d",k,b);
}
