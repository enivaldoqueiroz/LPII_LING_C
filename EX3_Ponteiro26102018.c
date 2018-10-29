/*EX3 - Criar uma função para retornar uma sub-string de uma string.
A função deve receber uma string, um índice de inicio e um indici de final.
Se, por exemplo, a função reveber a string "faculdade" e os indices 3 e 5, ela 
deve retornar a string "uld" pois são os caracteres existentes entre os indices 
3 e 5 da string original.

*/ 

#include <stdlib.h>
void exibe_str(char* str,int inicio, int fim)
{
	int i, y=0 ;
	char* aux = malloc (50 * sizeof(char));
		
	//Passo 1: 
	for(i = inicio; i <= fim; i++)
	{
		*(aux + y++) = *(str + i);
			
	}
	printf("Os carateste de indice %d a %d sao %s",inicio,fim,aux);
}

void quebra()
{
	printf("\n");
}

int main()
{
	int tam,inicio,fim;
	char* s = malloc(50 * sizeof(char));
	printf("Digite um texto: ");
	gets(s);
	tam = strlen(s);
	printf("Numero de caractere: %d",tam);
	quebra();
	printf("Digite o intervalor a ser exibo de 0 a %d",tam-1);
	quebra();
	printf("Intervalo Inicial: ");
	scanf("%d",&inicio);
	//quebra();
	printf("Intervalo Final: ");
	scanf("%d",&fim);
	exibe_str(s,inicio,fim);
	quebra();
	printf(s);
}
