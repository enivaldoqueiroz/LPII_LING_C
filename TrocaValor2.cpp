#include <iostream>



void dividir(float* a , float* b)
{
	float soma = *a + *b;
		
	*a = *a / soma;
	
	*b = *b / soma;
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
	
	printf("Os valores de a e b com percentual %f e %f ", a*100 , b*100);
	
	
}
