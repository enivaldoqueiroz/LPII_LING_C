//V1 - 02)
#include <stdio.h>


int main()
{
	char str1[50], str2[50];
	int i, count = 0;
	
	printf("Texto 1:");
	gets(str1);
	printf("Texto 2:");
	gets(str2);
	printf("\n");
	
	
	for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++ )
	{
		if(str1[i] == str2[i])
		{
			count++;
		}
	}
	
	printf("Caracteres em comum: %d", count);
}
