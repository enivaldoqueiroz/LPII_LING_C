int main()
{
	int vetor[] = {13,12,17,19,11};
	int *pont;	
	pont = vetor;
	int i;
	
	/*printf("%d\t", *(vetor+0));
	printf("%d\t", *(vetor+1));
	printf("%d\t", *(vetor+2));
	printf("%d\t", *(vetor+3));
	printf("%d\n", *(vetor+4));
	printf("%d\n", pont);
	*/
	
	for(i=0; i < 5;i++)
	{
		printf("%d\t", *(vetor+i));			
	}
	
	printf("\n");
	
	for(i=0; i < 5;i++)
	{
		printf("%d\t", *(pont+i));
	}
	
	/* Os vetores não podem ter o seu endereço deslocados
	
	printf("\n");
	
		for(i=0; i < 5;i++)
	{
		printf("%d\t", *(vetor++));			
	}
	*/
	
	printf("\n");
	
	for(i=0; i < 5;i++)
	{
		printf("%d\t", *(pont++));
	}
	
	
}
