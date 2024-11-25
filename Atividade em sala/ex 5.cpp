#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("---QUAL É O MAIOR?---\n");
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
			printf("O número %d é MAIOR que o número %d.", num1, num2);
		}
	else if (num2 > num1) { 
		printf("O número %d é MAIOR que o número %d", num2, num1);
	}
		
	return 0;
}
