//[1] - Trocar os caracteres de índice par pelos de índice ímpar e vice-versa;
//Ex.: a string "abcde\0" deve ser altereada para "badce\0"

//[2] - Inverter uma string. 
//Ex.: a string "abcde\0" deve ser alterada para "edcba\0"

//[3] - SUBSTITUIR um caractere na string. A string, o caractere a ser incluido e a 
//      posição onde o mesmo deve ser incluido devem ser lidas pelo teclado.
//Ex.: usuario digitou, a string "abcde\0", o caractere 'x' e a posição 3 'x'.
//     nesse caso, precisamos substituir o caractere da posição 3 por 'x'.
//               012345                           012345
//     A string "abcde\0" deve ser alterada para "abcxe\0" 

//[4] - INCLUR um caractere na string. A string, o caratere a ser incluido e a 
//      posição onde o mesmo deve ser incluido devem ser lidas pelo teclado.
//Ex.: Nesse caso, precisamos adicionar o caractere 'x' e a posição 3.
//               012345                           0123456
//     A string "abcde\0" deve ser alterada para "abcxde\0" 

int main()
{
	char str[100] ,aux;
	int pos;
	int i;
	
	printf("Digite um texto: ");
	gets (str);
	
	//[1] - Trocar os caracteres de índice par pelos de índice ímpar e vice-versa;
	//Ex.: a string "abcde\0" deve ser altereada para "badce\0"
	
	for(i = 0; i < strlen(str); i = i+2)
	{
		if(str[i+1] != '\0')
		{
			aux = str[i];
			str[i] = str[i+1];
			str[i+1] = aux;
		}
		
	}
	printf(str);
	printf("\n");
	
	//[2] - Inverter uma string. 
	//Ex.: a string "abcde\0" deve ser alterada para "edcba\0"
	
	
	//[3] - SUBSTITUIR um caractere na string. A string, o caractere a ser incluido e a 
	//      posição onde o mesmo deve ser incluido devem ser lidas pelo teclado.
	//Ex.: usuario digitou, a string "abcde\0", o caractere 'x' e a posição 3 'x'.
	//     nesse caso, precisamos substituir o caractere da posição 3 por 'x'.
	//               012345                           012345
	//     A string "abcde\0" deve ser alterada para "abcxe\0"
	
	
		
	/*
	for( i = 0; i < strlen(str); i++)
	{
		if(str[i] == 'd')
		{
			str[i] = 'x';
		}
	}
	printf("SUBSTITUICAO: %s", str);
	printf("\n");
	*/
	
	//[4] - INCLUR um caractere na string. A string, o caratere a ser incluido e a 
	//      posição onde o mesmo deve ser incluido devem ser lidas pelo teclado.
	//Ex.: Nesse caso, precisamos adicionar o caractere 'x' e a posição 3.
	//               012345                           0123456
	//     A string "abcde\0" deve ser alterada para "abcxde\0"
	
}
