#include <stdio.h>
main()
{

int i,k,l,n,b;//declarando variavaeis

//pedindo o valor de n ao usuario
printf("DIGITE O VALOR DE N: \n");
scanf("%d",&n);
//valores neutros
k=0;
b=1;

for(i=0 ; i<=n ; i++) //repetindo os valores p/ o produtório e somatorio
{
 k= (i*i)+k; //somatorio
 b= ((2*i)+1)*b;  //produtorio

}
l= k+b; //valor do produtorio mais o valor do somatorio
printf("Resultado: %d\n",l);//apresentando ao usuario o resultado
}
