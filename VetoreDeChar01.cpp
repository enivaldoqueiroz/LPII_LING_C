#include <stdio.h>
#include <stdlib.h>

/*
//1)Contar a quantidade do caracter c;
//2)Ler um texto e contar quantos caracteres o texto possui, ou seja, qual o seu tamanho?;
//3)Ler um texto e trocar todas as letras 'Q' por 'A';
//4)ler um texto e trocar todas as letras minusculas por maiuscula e vice-versa.


*/
int main()
{
	int i, count = 0;
	char texto[100];
	printf("Digite o texto: ");
	gets(texto);
	
	//1)Contar a quantidade do caracter c;
	for (i=0; texto[i]!='\0'; i++)
	{
		if(texto[i] == 'c')
		{
			count++;
		}
	}
	printf("O texto tem %d caracteres c.", count);
	printf("\n");
	
	//2)Ler um texto e contar quantos caracteres o texto possui, ou seja, qual o seu tamanho?;
	for (i=0; texto[i]!='\0'; i++)
	{
		count++;	
	}
	printf("O texto tem %d caracteres c.", count);
	printf("\n");
	
	//3)Ler um texto e trocar todas as letras 'Q' por 'A';
	for (i=0; texto[i]!='\0'; i++)
	{
		if(texto[i] == 'Q')
		{
			texto[i]='A';
		}
	}
	printf("O troca de caracteres: %s", texto);
	printf("\n");
	
	//4)ler um texto e trocar todas as letras minusculas por maiuscula e vice-versa.
	for (i = 0; texto[i] != '\0'; i++)
	{
		if(texto[i]>= 'A' && texto[i]<='Z')
		{
			texto[i] = texto[i] + 32;
		} 
		else if(texto[i]>= 'a' && texto[i]<='z')
		{
			texto[i] = texto[i] - 32;
		}
	}
	printf("O troca de todas as letras minusculas por maiuscula e vice-versa : %s", texto);
	printf("\n");
}
