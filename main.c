#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Adicionado Ol� Mundo - Sa�da de dados - ESCREVA
	
	printf("Hello Word \n\n");
	
	// adicionando intera��o com usuario - Entrada de dados - LEIA
	char  nome[10];
	printf("informe o seu nome: ");
	scanf("%s", &nome);
	
	printf("\nMuito prazer em te conhecer %s", nome);
	
	return 0;
}
