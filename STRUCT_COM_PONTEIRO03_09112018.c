//

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
	aluno * p = malloc (50 * sizeof(aluno));
	
	(*p+0).matricula = 123;
	(*p+1).matricula = 123;
	(*p+1).matricula = 123;
	
	free(p);
	
}
