//V1 - B - 03)
#include <stdio.h>


int main()
{
	char str[50], inv[50], aux ;
	int tam,i,j, flag;
	
		
	printf("Texto 1:");
	gets(str);
	tam = strlen(str);
	j = tam - 1;
	
		
	
	for(i = 0; i < tam; i++ )
	{
		inv[i] = str[i];
	}
	
	for(i = 0; i < j ; i++)
	{
		aux = inv[i];
		inv[i] = inv[j];
		inv[j] = aux;
		j--;
		
		
	}
	
	for(i = 0; i <= tam; i++)
	{
		if(inv[i] != inv[i])
		{
			flag = 1;
			break;
		} 
		
	}
	
	if(flag == 0)
	{
		printf("Eh palindromo!");
	}
	else
	{
		printf("Nao eh palindromo!");
	}
	
	
}
