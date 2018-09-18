#include <stdio.h>
//Vetores
//1)Preencher a matriz
//2)Somar todos os valores da matriz
//3)Somatorio da 2º linha
//4)Somatorio da 2º Coluna
//5)Somatorio da Diagonal Principal
//6)Somatorio da Diagonal Secundaria

int main ()
{
	int t, i, mat[4][4];
	int soma = 0;
	int soma2linha = 0;
	int soma2coluna = 0;
	int soma1diagonal = 0;
	int soma2diagonal = 0;
		
	//1)Preenche a matriz
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			mat [t][i] = (t*4)+i+1;
		}
	}
	
	//Visualiza a matriz
	for (t=0; t<4;t++)
	{
		for(i=0; i<4; i++)
		{
			printf("[%2d]", mat[t][i], "\n");
		}
		printf("\n");
	}
	
	printf("\n");
	
	//2)Somar todos os valores da matriz
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			soma = soma + mat [t][i];
		}
	}
	
	//Visualiza a soma
	printf("Somatorio de Todos os valores da matriz: %d", soma , "\n");
	printf("\n");
	printf("\n");
		
	//3)Somatorio da 2º linha
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			if (t==1)
			{
				soma2linha = soma2linha + mat [t][i];
			}
		}
	}
	//Visualiza a soma da 2º linha
	printf("Somatorio da linha 1: %d\n", soma2linha , "\n");
	printf("\n");
	printf("\n");
	
	//4)Somatorio da 2º Coluna
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			if (i==1)
			{
				soma2coluna = soma2coluna + mat [t][i];
			}
		}
	}
	
	//Visualiza a soma da 2º Coluna
	printf("Somatorio da Coluna 2: %d", soma2coluna , "\n");
	printf("\n");
	printf("\n");
	
	
	//5)Somatorio da Diagonal Principal	
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			if ( t==0 && i==0 || t==1 && i==1 || t==2 && i==2 || t==3 && i==3 )
			{
				soma1diagonal = soma1diagonal + mat [t][i];
			}
		}
	}
	
	//Visualiza da Diagonal Principal	
	printf("Somatorio da Diagonal 1: %d", soma1diagonal , "\n");
	printf("\n");
	printf("\n");
	
	//6)Somatorio da Diagonal Secundaria	
	for (t=0; t<4; t++)
	{
		for(i=0; i<4; i++)
		{
			if ( t==0 && i==3 || t==1 && i==2 || t==2 && i==1 || t==3 && i==0 )
			{
				soma2diagonal = soma2diagonal + mat [t][i];
			}
		}
	}
	
	//Visualiza da Diagonal Secundaria	
	printf("Somatorio da Diagonal 2: %d", soma2diagonal , "\n");
	printf("\n");
	printf("\n");
}


