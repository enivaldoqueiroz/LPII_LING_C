#include <stdio.h>

int main()
{
	FILE* f = fopen("DOC.txt", "w");
	
	fputc('a', f);
	
	fclose(f);	
}
