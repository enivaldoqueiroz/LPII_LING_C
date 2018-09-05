#include <iostream>

void troca(int* x, int* y)
{
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
	printf("x = %d e y = %d\n", *x , *y);
	
}

int main()

{
	int a, b;
	a = 10;
	b = 15;
	troca(&a, &b);	
	
	
	printf("a = %d e b = %d", a , b);
}
