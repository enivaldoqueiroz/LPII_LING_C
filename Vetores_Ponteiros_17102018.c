
int main()
{
	char str1[50], str2[50];
	char* p1;
	char* p2;
	p1 = str1;
	p2 = str2;
	int i, tam, count = 0;
	
	
	
	printf("Texto 1:");
	gets(str1);
	printf("Texto 2:");
	gets(str2);
	printf("\n");
	tam = strlen(p1);
	
	//Metodo I
	/*
	for(i = 0; *(str1 + i) != '\0'; i++ )
	{
		if(*(str1 + i) == *(str2 + i))
		{
			count++;
		}
	}
	*/
	
	//Metodo II
	
	for(i = 0; i < tam; i++)
	{
		if(*(p1++) == *(p2++))
		{
			count++;
		}
	}
	
	printf("Caracteres em comum: %d", count);
}
