#include <stdio.h>

//Criar uma função para reajustar o salorio de uma empregada.
//Essa funçao dere receber a salorio e reajustar (%) e deve efetuar o
//calculo correspondente.
//Ex. se o salario recebido for de 1000 e o reajuste for de 0.25(25%), o novo salrio deve
//ser de 1250 (1000 + 250)


void reajustar_salario(float* salario, float reajuste)
{
	
	*salario = *salario + (*salario * reajuste);
		
}

int main()
{
	float salario, reajuste;
	printf("Digite o salario: ");
	scanf("%float", &salario);
	reajuste = 0.20;
	
	reajustar_salario(&salario, reajuste);
	printf("O salario com reajuste eh %f.", salario);
}
