#include <stdio.h>
struct produto {
	int codigo;
	char nome[50];
	float preco;
};

typedef struct produto produto;

void le_produtos(produto* lista, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
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

void le_produtos_arq(FILE* f, int tam)
{
	
}

int main()
{
	produto* lista = malloc(3 * sizeof(produto));
	FILE* f = fopen("C:\\Users\\rwagner\\Desktop\\teste.txt", "w");
	le_produtos(lista, 3);
	imprime_produtos(lista, 3);
	grava_produtos(f, lista, 3);
	fclose(f);
}
