#include <stdio.h>
#include <String.h>

int main()
{
	int i;
	char* str = malloc (50 * sizeof(char));
	FILE* f = fopen("DOC.txt", "w");
	

		
	fputs("Farias Brito\n", f);	
	//printf("\n");
	fputs("Brito Farias\n", f);	
		//fclose(f);

	fputs("Farias Brito", f);	
	fclose(f);	
	
	f = fopen("DOC.txt", "r+");
	printf(fgets(str, 50, f));
	//printf("\n");
	printf(fgets(str, 50, f));
	
	//printf(str);
	fclose(f);
}
