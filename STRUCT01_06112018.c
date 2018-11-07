//Estrutu = Struct
struct contato
{
	int codigo;
	int fone;
	char email[50];
	char endereco[50];
};

//Defineção de tipo

typedef struct contato contato;

int main()
{
	contato lana;
	
	lana.codigo = 001;
	lana.fone = 8596574545;
	strcpy(lana.email, "lana.anjos@gmail.com");
	strcpy(lana.endereco, "Rua 12, N 800");
	
	printf("Codigo: %d\n", lana.codigo);
	printf("Telefone: %d\n", lana.fone);
	printf("E-mail: %s\n", lana.email);
	printf("Endereco: %s", lana.endereco);
}
