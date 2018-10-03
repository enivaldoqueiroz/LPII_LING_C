//V1 - 03)
#include <stdio.h>


int main()
{
	char str[50];
	int tam,i,j;
	
		
	printf("Texto 1:");
	gets(str);
	tam = strlen(str);
	j = tam - 1;
		
	
	for(i = 0; i < j; i++ )
	{
		if(str[i] != str[j])
		{
			printf("Nao eh palindrome!");
			break;
		}
		j--;
	}
	if (i >= j)
	{
		printf("Eh palindrome!");
	}	
	
	
}
