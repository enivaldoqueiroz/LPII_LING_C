//EX:1 - 

void troca_mm(char* str)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}else if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char * str = malloc(50 * sizeof(char));
	gets(str);
	troca_mm(str);
	printf(str);
}
