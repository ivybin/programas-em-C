 
/*APRESENTAR VARIAVEIS:
    INTEIRAS: -DIA
              -MES
    CARACTERE: -SIGNO
*IMPRIMA NA TELA: DIGITE O DIA
RECEBA OS DADOS;
*IMPRIMA NA TELA: DIGITE O MES
RECEBA OS DADOS;
    SE ( MES IGUAL A 1 E DIA>=21) 
    IMPRIMA NA TELA: SEU SIGNO E AQUARIO;
    SE ( MES IGUAL A 1 E DIA<21)
    IMPRIMA NA TELA: SEU SIGNO E CAPRICORNIO;
    SE ( MES IGUAL A 2 E DIA <20)
    IMPRIMA NA TELA: SEU SIGNO E AQUARIO;
    SE ( MES IGUAL A 2 E DIA >=20)
    IMPRIMA NA TELA: SEU SIGNO E PEIXE;
    SE ( MES IGUAL A 3 E DIA <=20)
    IMPRIMA NA TELA: SEU SIGNO E PEIXE;
    SE ( MES IGUAL A 3 E DIA >20)
    IMPRIMA NA TELA: SEU SIGNO E ARIES;
    SE ( MES IGUAL A 4 E DIA <=20)
    IMPRIMA NA TELA: SEU SIGNO E ARIES;
    SE ( MES IGUAL A 4 E DIA >20)
    IMPRIMA NA TELA: SEU SIGNO E TOURO;
    SE ( MES IGUAL A 5 E DIA <=20)
    IMPRIMA NA TELA: SEU SIGNO E TOURO;
    SE ( MES IGUAL A 5 E DIA >20)
    IMPRIMA NA TELA: SEU SIGNO E GEMEOS;
    SE ( MES IGUAL A 6 E DIA <=20)
    IMPRIMA NA TELA: SEU SIGNO E GEMEOS;
    SE ( MES IGUAL A 6 E DIA> 20)
    IMPRIMA NA TELA: SEU SIGNO E CANCER\N; 
    IMPRIMA NA TELA: PROCURE UM MEDICO...;
    SE ( MES IGUAL A 7 E DIA <=21)
    IMPRIMA NA TELA: SEU SIGNO E CANCER\N;
    IMPRIMA NA TELA: PROCURE UM MEDICO...;
    SE ( MES IGUAL A 7 E DIA >21)
    IMPRIMA NA TELA: SEU SIGNO E LEAO;
    SE ( MES IGUAL A 8 E DIA <=22)
    IMPRIMA NA TELA: SEU SIGNO E LEAO;
    SE ( MES IGUAL A 8 E DIA >22)
    IMPRIMA NA TELA: SEU SIGNO E VIRGEM\N;
    IMPRIMA NA TELA: PROCURE POR GRADUANDA SAFADA OU PIROCUDO FOFO...;
    SE ( MES IGUAL A 9 E DIA <=22)
    IMPRIMA NA TELA: SEU SIGNO E VIRGEM\N;
    IMPRIMA NA TELA: PROCURE POR GRADUANDA SAFADA OU PIROCUDO FOFO...;
    SE ( MES IGUAL A 9 E DIA >22)
    IMPRIMA NA TELA: SEU SIGNO E LIBRA;
    SE ( MES IGUAL A 10 E DIA <=22)
    IMPRIMA NA TELA: SEU SIGNO E LIBRA;
    SE ( MES IGUAL A 10 E DIA >22)
    IMPRIMA NA TELA: SEU SIGNO E ESCORPIAO;
    SE ( MES IGUAL A 11 E DIA <=21)
    IMPRIMA NA TELA: SEU SIGNO E ESCORPIAO;
    SE ( MES IGUAL A 11 E DIA > 21)
    IMPRIMA NA TELA: SEU SIGNO E SAGITARIO;
    SE ( MES IGUAL A 12 E DIA <=21)
    IMPRIMA NA TELA: SEU SIGNO E SAGITARIO;
    SE ( MES IGUAL A 12 E DIA >21)
    IMPRIMA NA TELA: SEU SIGNO E CAPRICORNIO; */
    
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
    main()
    { 
	int DIA;
	int MES;
	char opcao,OP;
	system("color 1B");
	printf("   ______________________* DESCUBRA SEU SIGNO *______________\
_________\n");
printf("\n\n *MENU*\n\n");
printf("I:INICIAR \n\n\n"); 
opcao=getch();
system("cls");
switch(opcao){
	case 'I':{
	
    printf("Digite o mes do seu aniversario:  \n");
    scanf ("%d",&MES);
    
	printf("Digite o dia do seu aniversario:  \n");
    scanf ("%d",&DIA);
   
	if (((MES)==1) && ((DIA)>=21)){
printf("\n\n\n\n\n\n\n\nSEU SIGNO E AQUARIO\n");
printf("\n\nTE AMO \n");
}
    if (((MES)==1) && ((DIA)<21)){
printf("\n\n\nSEU SIGNO E CAPRICORNIO\n");
printf("\n\nTE AMO \n");
}
    if (((MES)==2) && ((DIA)<20)){
printf("SEU SIGNO E AQUARIO\n");
}
	if (((MES)==2) && ((DIA)>=20)){
printf("SEU SIGNO E PEIXE\n");
}
	if (((MES)==5) && ((DIA)==14)){
printf("X");
}
}	break;
default:printf("\t\t\t   **Opcao Invalida !**\n\n");
} 

printf("\n\n\n\nPARA SAIR, PRESSIONE:S \n\nPARA VER OUTRO, PRESSIONE:V\n\n");
OP=getch();
system("cls");
switch(OP){
case 'S':break;
case 'V':return(1);
}
    
	}

    
    
