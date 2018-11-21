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

void maior_produto()
{
	
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
	maior_produto();
	fclose(f);
}
