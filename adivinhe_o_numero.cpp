#include <iostream>
#include <stdlib.h>
#include<time.h>
int main(){					//Realizado pelo João Beirão da turma 10º11ª do AERDL
	
	srand(time(NULL));
	
	int modo;
	int numero;
	int ntentativas;
	int tentativa;
	
    char Lim_H = 196;
    char Lim_SE = 218;
    char Lim_SD = 191;
    char Lim_V = 179;
    char Lim_IE = 192;
    char Lim_ID = 217;
    char acentoU = 163;
    char acentoA = 160;
    
    
    system("color 2F");
    
	 
	 
	printf("\n\t\t%c", Lim_SE);																			//---------------------------------------------------------
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tAdivinhe o n%cmero:\t\t%c",Lim_V, Lim_V, Lim_V, acentoU, Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);																				//-----------------------------------------------------------
    
    printf("\n\n\t\tQual o modo que pretende jogar???");
    printf("\n\n\tModo 1 --> Um jogador pensa num n%cmero e outro tenta adivinhar", acentoU);
    printf("\n\n\tModo 2 --> O computador cria num n%cmero e jogador tenta adivinhar", acentoU);
    printf("\n\n\t\tModo - ");
    scanf(" %d", &modo);
    
    system("cls;");
    
    
    printf("\n\t\t%c", Lim_SE);																			//---------------------------------------------------------
    for (int column =0; column <47;++column)
    {
    	printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tAdivinhe o n%cmero:\t\t%c",Lim_V, Lim_V, Lim_V, acentoU, Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);																				//-----------------------------------------------------------



    if(modo == 1)
		{
    	printf("\n\tJogador 1 - Escolha um n%cmero: ",acentoU);
    	scanf(" %d", &numero);
    	system("cls");
    	printf("\n\t\t%c", Lim_SE);																			//---------------------------------------------------------
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c", Lim_SD);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tAdivinhe o n%cmero:\t\t%c",Lim_V, Lim_V, Lim_V, acentoU, Lim_V);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c\n", Lim_ID);																				//-----------------------------------------------------------
    	printf("\n\tEscolha quantas tentativas o jogador dois ter%c para adivinhar: ", acentoA);
    	scanf("%d",&ntentativas);
    	system("cls");
    	printf("\n\t\t%c", Lim_SE);																			//---------------------------------------------------------
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c", Lim_SD);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tAdivinhe o n%cmero:\t\t%c",Lim_V, Lim_V, Lim_V, acentoU, Lim_V);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c\n", Lim_ID);																				//-----------------------------------------------------------
    	printf("\n\t\tO jogador 1 escolheu o seu n%cmero, agora ter%c %d tentativas para acertar:",acentoU, acentoA ,ntentativas);
    	for(int CV=1;CV<=ntentativas && tentativa != numero;CV=CV+1)
		{
    		printf("\n\n\n\tTentativa %d  --> ",CV);
    		scanf(" %d", &tentativa);
    		if(tentativa < numero)
    		printf("\n\to n%cmero tem de aumentar\n\n\t", acentoU);
    		if(tentativa > numero)
    		printf("o n%cmero tem de baixar\n\n\t", acentoU);
		}
		
		system("cls");
		
		printf("\n\t\t%c", Lim_SE);																			//---------------------------------------------------------
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c", Lim_SD);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tAdivinhe o n%cmero:\t\t%c",Lim_V, Lim_V, Lim_V,acentoU, Lim_V);
    	printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    	for (int column =0; column <47;++column)
    	{
    	printf("%c",Lim_H);
    	}
    	printf("%c\n", Lim_ID);																				//-----------------------------------------------------------
		if(tentativa==numero)
		{
			printf("\n\t\tPARABENS - O JOGADOR 2 GANHOU O JOGO\n\n\t\to numero era %d", numero);
		}
		else{
			printf("ACABOU - O JOGADOR 1 GANHOU\n\n\t\t");
			printf("o n%cmero era %d",acentoU ,numero);
		}
		}
	else
	{
		numero =  rand() % 30;
		ntentativas = 10;
    	printf("\n\t\tO computador escolheu o um n%cmero entre 0 e 30, agora ter%c %d tentativas para acertar:",acentoU, acentoA ,ntentativas);
    	for(int CV=1;CV<=ntentativas && tentativa != numero;CV=CV+1)
		{
    		printf("\n\n\n\tTentativa %d  --> ",CV);
    		scanf(" %d", &tentativa);
    		if(tentativa < numero)
    		printf("\n\to n%cmero tem de aumentar\n\n\t", acentoU);
    		if(tentativa > numero)
    		printf("o n%cmero tem de baixar\n\n\t", acentoU);
			
		}
		system("cls");
		if(tentativa==numero)
		{
			printf("\n\t\tPARABENS - O JOGADOR GANHOU O JOGO\n\n\t\to n%cmero era %d",acentoU, numero);
		}
		else{
			printf("ACABOU - O COMPUTADOR GANHOU\n\n\t\t");
			printf("o n%cmero era %d",acentoU ,numero);
		}
	}
    
    
    
    

    
    
    
}
	

