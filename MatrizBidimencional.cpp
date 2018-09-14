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
	printf("%d", soma , "\n");
	printf("\n");
	printf("\n");
		
	//3)Somatorio da 2º linha
	for (t=0; t<3; t++)
	{
		for(i=0; i<2; i++)
		{
			if (t==2)
			{
				soma2linha = soma2linha + mat [t][i];
			}
		}
	}
	//Visualiza a soma da 2º linha
	printf("%d", soma2linha , "\n");
	
}


