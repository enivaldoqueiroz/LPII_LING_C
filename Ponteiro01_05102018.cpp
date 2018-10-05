#include <stdio.h>

//Ponteiro -

int main()
{
	int M;  //Declaração da variavel M;
	int* P; //Declaração do ponteiro P - Um ponreiro é uma tipo de dado que armazena um endereço de memoria;
		
	M = 20; //Recebe um valor;
	P = &M; //Recebe o endereço de M.
	//*p = 30;

	printf("M recebe o valor %d\n", M);
	
	printf("P recebe o enderece de M %d\n", P); 
	
 
 } 
