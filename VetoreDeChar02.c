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
	/*for (i = 0; i < strlen(str); i++)
	{
		if(str[i]=='a')
		{
			str[i] = 'A';
		}
	}
	printf(str);
	*/
	
	//4)ler um texto e rtocar todas as letras minusculas por maiuscula e vice-versa.
	// a == 97 e A = 65
	for (i = 0; i < strlen(str); i++)
	{
		if(str[i]>= 'A' && str[i]<='Z')
		{
			str[i] = str[i] + 32;
		} 
		else if(str[i]>= 'a' && str[i]<='z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf(str);
	
	
	

}
