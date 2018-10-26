/*EX2 - Criar uma função que receba uma string, um caractere e uma posição. 
Essa função deve inserir o caractere recebido na posição recebida da string. 
Se, por exemplo, a função receber a string "pote", o caractere 'r' e aposição 2,
a string deve ser alterada para "porte".

*/ 

void insere_char(char* str, char ch, int pos)
{
	char* aux = malloc(50 * sizeof(char));
	int i, tam;
	//Passo 1: Copiar os caracteres anteriores a pos
	for(i =0; i < pos; i++)
	{
		*(aux + i) = *(str + i);
		
	}
	
	//Passo 2: Copiar o caractere recebido
	*(aux + pos) = ch;
	
	//Passo 3: Copiar os caracteres posterioreses a pos
	for(i =pos + 1; *(str + i -1) != '\0'; i++)
	{
		*(aux + i) = *(str + i - 1);
		
	}
	
	tam = strlen(str) + 1;
	*(aux + tam)= '\0';
	strcpy(str , aux);
}

int main()
{
	char* s = malloc(50 * sizeof(char));
	gets(s);
	insere_char(s,'_',4);
	printf(s);
}
