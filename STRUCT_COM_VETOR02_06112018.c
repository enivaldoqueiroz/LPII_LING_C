//Estrutu = Struct

/*
Exe - 	Criar um vetor para representar um aluno com matricula, nome, cr(coef. de rendimento) e sexo.
		1 - Na main criar um vetor de alunos com capacitadade 100;
		2 - Incluir as informaçoes de 3 alunos no vetor;
		3 - Imprimir todas essas informações na tela.
*/
struct aluno
{
	int matricula;
	float cr;
	char nome[50];
	char sexo;
};

//Defineção de tipo

typedef struct aluno aluno;

int main()
{
	aluno academico[100];
	int i;
	
	
	
	for (i = 0; i<=2; i++)
	{
		printf("\nDigite Matricula[%d]: ",i);
		scanf("%d", &academico[i].matricula);
		//fflush(stdin);
		printf("Digite Nome[%d]: ",i);
		gets(academico[i].nome);
		printf("\nDigite CR[%d]: \n",i);
		scanf("%f", &academico[i].cr);
		printf("\nDigite Sexo[%d]: \n",i);
		academico[i].sexo = getch();
		
	}
	
	for (i = 0; i<=3; i++)
	{
		printf("Matricula[%d]: %d", i, academico[i].matricula);
		
		
	}
}
