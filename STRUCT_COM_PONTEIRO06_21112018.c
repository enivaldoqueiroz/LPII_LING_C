#include <stdio.h>
#include <stdlib.h>
struct produto {
	int codigo;
	char nome[50];
	float preco;
};

typedef struct produto produto;

void le_produtos(produto* lista, int tam)
{
	int i;
	for(i = 0; i <= tam; i++)
	{
		printf("Digite o codigo: ");
		scanf("%d", &lista->codigo);
		fflush(stdin);
		printf("Digite o nome: ");
		gets(lista->nome);
		printf("Digite o preco: ");
		scanf("%f", &lista->preco);
		fflush(stdin);
		lista++;
	}
}

void imprime_produtos(produto* lista, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d\n", lista->codigo);
		printf("%s\n", lista->nome);
		printf("%f\n", lista->preco);
		lista++;
	}
}

void grava_produtos(FILE* f, produto* lista, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		fprintf(f, "%d", lista->codigo);
		fputs("\n", f);
		fputs(lista->nome, f);
		fputs("\n", f);
		fprintf(f, "%f", lista->preco);
		fputs("\n", f);
		lista++;
	}
}

void le_produtos_arq(FILE* f, produto* lista, int tam)
{
	int i;
	//produto* lista = malloc(3 * sizeof(produto));
	
	for(i = 0; i < tam; i++ )
	{
		fscanf(f, "%d", &lista->codigo);
		fscanf(f, "%s", &lista->nome);
		fscanf(f, "%f", &lista->preco);
		//printf("%d\n", lista->codigo);
		lista++;
	}
}

char* maior_produto(produto* lista, int tam)
{
	int i;
	float mais_caro = lista->preco;
	char* nome_mais_caro = malloc (50 * sizeof(char));
	strcpy(nome_mais_caro, lista->nome);
	
	for(i = 0; i < tam; i++)
	{
		if(lista->preco > mais_caro)
		{
			mais_caro = lista->preco;
			strcpy(nome_mais_caro, lista->nome);
		}
		lista++;
	}
	
	return nome_mais_caro;
}

//Criar uma função para indentificar o produto mais barato
//Criar uma função para descubrir o preco medio dos produtos
float preco_medio(produto* lista, int tam)
{
	int i,cont;
	float media,soma = 0;
	for(i = 0; i < tam; i++)
	{
		soma = lista->preco + soma;
		lista++;
	}
	
	media = soma/tam;
	return media;
}

int main()
{
	produto* lista = malloc(3 * sizeof(produto));
	//FILE* f = fopen("produto.txt", "w");
	FILE* f = fopen("produto.txt", "r");
	//le_produtos(lista, 3);
	//imprime_produtos(lista, 3);
	//grava_produtos(f, lista, 3);
	le_produtos_arq(f, lista, 3);
	imprime_produtos(lista, 3);
	printf("\n");
	printf(maior_produto(lista, 3));
	printf("\n");
	printf("\n%f",preco_medio(lista,3));
	
	fclose(f);
}
