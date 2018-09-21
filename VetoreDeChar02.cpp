#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	int i;
	printf("Digite um nome: ");
	gets(str);
	
	//Metodo 1
	//strlen - Contabiliza a quantidade de caractere encontrado
	for (i = 0; i < strlen(str); i++)
	{
		if(str[i]=='a');
		{
			str[i] = 'A';
		}
	}
	printf(str);
	
	//Metodo 2
	/*for(i=0; str[i] != '\0', i++)
	{
		
	}
	*/
}
