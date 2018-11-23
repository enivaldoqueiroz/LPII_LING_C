/*
	Cria uma função que receba três strings (s1, s2 e s3). 
	A função deve construir a string s3 a partir da interpolação dos caracteres de s1 e s2.

*/

void interpolacao(char* s1, char* s2, char* s3)
{
	int i;
	int tam = strlen(s1);
	
	for(i = 0; *(s1 + i) != '\0' ; i ++)
	{
		*(s3 + (2*i)) = *(s1+i);
		*(s3 + (2*i+1)) = *(s2+i);
		
		
	}
	*(s3 + (2*i)) = '\0';
}

int main()
{
	char* s1 = malloc (50 * sizeof(char));
	char* s2 = malloc (50 * sizeof(char));
	char* s3 = malloc (100 * sizeof(char));
	
	int tam;
	
	

	printf("Digite um texto1: ");
	gets (&s1);
	
	printf("Digite um texto2: ");
	gets (&s2);
	

	interpolacao(s1 , s2, s3);
	printf(s3);
}
