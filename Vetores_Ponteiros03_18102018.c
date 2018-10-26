#include <string.h>
#include <stdio.h>
/*	>>Criar uma função que receba uma String 
	e dois caracteres.
	>>Essa função deve substitur todas as 
	ocorrências do 1º caractere pelo segundo.

*/

void troca(char* s, char c1, char c2, int tam)
{
	int i;
	//int tam = strlen(s);
	
	for(i = 0; i < tam; i++)
	{
		if(*s == c1)
		{
			*s = c2;
			
		}
		*s+i;
	}
} 

void main()
{
	
	char char0[50],char1, char2, *pt;
	
	printf("Digite o Paravra : ");
	gets(char0);
	printf("\n");
	printf("Digi
	printf("\n");te o 1 Caractere : ");
	scanf("%c", &char1);
	printf("\n");
	printf("Digite o 2 Caractere: ");
	scanf("%c", &char2);
	
	
	int tam = strlen(char0);
	
	troca(char0, char1, char2, tam);
	
	printf(char0);
	
}
