#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("---QUAL � O MAIOR?---\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
			printf("O n�mero %d � MAIOR que o n�mero %d.", num1, num2);
		}
		else if (num1 == num2) { 
			printf("Os n�meros %d e %d S�O IGUAIS.", num1, num2);
		}
		else{
			printf("O n�mero %d � MAIOR que o n�mero %d", num2, num1);
		}
		
	return 0;
}
