#include <stdio.h>

int main()
{
	char c = 'w';
	char* p;
	char* t;
	t = &c;
	p = &c;
	
	printf("%s\n", p);
	printf("%s\n", t);
}
