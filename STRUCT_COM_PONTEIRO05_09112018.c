#include <stdio.h>

struct aluno 
{
	int matricula;
	char nome[50];
	float cr;
	char sexo;
};

typedef struct aluno aluno;

int main ()
{
	int i;
	aluno * p = malloc (50 * sizeof(aluno));
	
	for(i = 0; i<3; i++)
	{
	
	printf("Digite a matricula: ");
	scanf("%d", &(p+i)->matricula);
	fflush(stdin);
	printf("Digite o nome: ");
	gets((p+i)->nome);
	
	
	}
	
	for(i = 0; i<3; i++)
	{
	printf("\nMatricula:");
	printf("%d", (p+i)->matricula);
	printf("\nDigite o nome: ");
	printf((p+i)->nome);
	
	}
	
		
	free(p);
	
}
