#include <stdio.h>

//Ponteiro -

int main()
{
	int M;  //Declara��o da variavel M;
	int* P; //Declara��o do ponteiro P - Um ponreiro � uma tipo de dado que armazena um endere�o de memoria;
		
	M = 20; //Recebe um valor;
	P = &M; //Recebe o endere�o de M.
	//*p = 30;

	printf("M recebe o valor %d\n", M);
	
	printf("P recebe o enderece de M %d\n", P); 
	
 
 } 
