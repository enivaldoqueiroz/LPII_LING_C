//V1 - 01)
#include <stdio.h>

//Função
void troca_dinheiro(float valor, float* n50, float* n10, float* n1)
{
	*n50 = valor/50;
	*n10 = (valor % 10) / 10;
	*n1  = valor % 10
}

int main()
{
	float valor, n50, n10, n1;
	troca_dinheiro(12565, &n50, &n10, &n1);
	print("%d notas de 50, %d notas de 10 e %d notas de 1", n50, n10, n1);
}
