#include <stdio.h>
#include <String.h>

struct produto{
	int codigo;
	char nome[50];
	float preco;
};

typedef struct produto produto;

void ler_produtos(produto* lista, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("Digite o Codigo: ");
		scanf("%d", &lista->codigo);
		fflush(stdin);
		pritf("Digite o nome: ");
		gets(lista->nome);
		fflush(stdin);
	}
}

void imprime_produtos(produto* lista, int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		
		printf("%d",lista->codigo);
		printf(lista->nome);
		printf("f",lista->preco);
	
	}
}

void grava_produtos()
{
	/*Exe - 
	int i;
	char* str = malloc (50 * sizeof(char));
	FILE* f = fopen("DOC.txt", "w");
	
	fputs("Farias Brito\n", f);	
	//printf("\n");
	fputs("Brito Farias\n", f);	
	//fclose(f);

	fputs("Farias Brito", f);	
	fclose(f);	
	
	f = fopen("DOC.txt", "r+");
	printf(fgets(str, 50, f));
	printf(fgets(str, 50, f));
	
	//printf(str);
	fclose(f);
	*/
}

int main()
{
	
	produto* lista = malloc (50 * sizeof(char));
	ler_produtos(lista);	
	imprime_produtos(lista);
	//Chamar a funçao gravar produtos
	
	
	
}
