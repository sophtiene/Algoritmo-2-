#include <stdio.h>

struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main(){
	struct cadastro c[4];
	int i;
	for(i=0; i<4; i++){
		printf("Digite o nome ............: ");
		gets(c[i].nome);
		
		printf("Digite a idade ...........: ");
		scanf("%d", &c[i].idade);
		
		printf("Digite a rua .............: ");
		gets(c[i].rua);
		
		printf("Digite o numero ..........: ");
		scanf("%d", &c[i].numero);
	}
	system("pause");
	return 0;
}
