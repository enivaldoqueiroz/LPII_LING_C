#include <stdio.h>;

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
	scanf("%d", &(*(p+i)).matricula);
	fflush(stdin);
	printf("Digite o nome: ");
	gets((*(p+i)).nome);
	fflush(stdin);
	printf("Digite a nota: ");
	scanf("%f",&(*(p+i)).cr);
	fflush(stdin);
	printf("Digite o sexo: ");
	(*(p+i)).sexo = getche();
	//gets((*(p+i)).sexo);
	printf("\n");
	
	}
	
	for(i = 0; i<3; i++)
	{
	
	printf("\nDigite a matricula: ");
	printf("%d", (*(p+i)).matricula);
	printf("\nDigite o nome: ");
	printf((*(p+i)).nome);
	printf("\nDigite a nota: ");
	printf("%f",(*(p+i)).cr);
	printf("\nDigite o sexo: ");
	printf((*(p+i)).sexo);
	printf("\n");
	
	}
	

	
	free(p);
	
}
