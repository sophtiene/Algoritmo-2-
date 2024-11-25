#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, media;
	
	printf("Digite a Nota #1: ");
	scanf("%f", &nota1);
	
	printf("Digite a Nota #2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2.0;
	
		if (nota1 > nota2) {
			printf("A Nota #1 (%.2f) é MAIOR que a Nota #2 (%.2f)\n", nota1, nota2);
		}
		else if (nota1 == nota2) { 
			printf("A Nota #1 (%.2f) é IGUAL que a Nota #2 (%.2f)\n", nota1, nota2);
		}
		else{
			printf("A Nota #2 (%.2f) é MAIOR que a Nota #1 (%.2f)\n", nota2, nota1);
		}
	
	printf("\nA média de Nota #1 com Nota #2 é igual a %.2f", media);
	
	return 0;
}
