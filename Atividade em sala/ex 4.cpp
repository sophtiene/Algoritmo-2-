#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	printf("---� PAR, OU �MPAR?---\n");
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("%d � um n�mero PAR", num);
	}
	else{
		printf("%d � um n�mero �MPAR", num);
	}
	return 0;
}
