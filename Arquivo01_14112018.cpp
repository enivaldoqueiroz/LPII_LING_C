#include <stdio.h>
#include <String.h>

int main()
{
	char* str = malloc (50 * sizeof(char));
	FILE* f = fopen("DOC.txt", "w");	
	fputs("Farias Brito", f);	
	fclose(f);	
	
	f = fopen("DOC.txt", "r+");
	printf(fgets(str, 50, f));
	fclose(f);
}
