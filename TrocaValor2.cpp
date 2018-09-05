#include <iostream>



void dividir(float* a , float* b)
{
	int a1;
	a1 = *a;
	
	*a = *a / (*a + *b);
	
	*b = *b / (a1 + *b);
}

void troca(float* a, float* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	float a,b;
	a = 4;
	b= 6;
	
	
	
	troca(&a , &b);
	printf("a = %f e b = %f \n", a, b);
	
	dividir(&a , &b);
	
	printf("a = %f e b = %f \n",a , b);
	
	
}
