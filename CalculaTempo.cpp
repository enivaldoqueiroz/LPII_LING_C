#include <stdio.h>

void calcula_tempo(int t, int* h, int*m, int* s)
{
	*h = t / 3600;
	*m = (t%3600) / 60;
	*s = (t % 3600) % 60;
}

int main ()
{
	int t , h, m, s;
	t = 12438;
	
	calcula_tempo(t, &h, &m, &s);
	printf("Tempo %d: %d horas, %d minutos e %d segundos.", t, h, m, s);	
}	 
