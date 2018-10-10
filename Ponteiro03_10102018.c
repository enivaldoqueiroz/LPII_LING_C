#include <stdio.h>

int main()
{
	
	char vet[6] = {'s', 'g', 'a', 'u', 'x', '\0'};
	char* p;
	p = vet;
	

	printf("%c\n", *(p++));
	printf("%c\n", *(p++));
	printf("%c\n", *(p++));
	printf("%c\n", *(p++));
	printf("%c\n", *(p++));
	printf("\n\n");
	//
	printf("%c\n", *(vet+0));
	printf("%c\n", *(vet+1));
	printf("%c\n", *(vet+2));
	printf("%c\n", *(vet+3));
	printf("%c\n", *(vet+4));	
}
