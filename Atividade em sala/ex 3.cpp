#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Digite a Nota #1: ");
	scanf("%f", &nota1);
	
	printf("Digite a Nota #2: ");
	scanf("%f", &nota2);
	
	printf("Digite a Nota #3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	if(nota1 > nota2){
		if(nota1 > nota3){
			printf("A Nota #1 é maior que as Notas #2 e #3");
		}
		else if(nota3 > nota1){
			printf("A Nota #3 é maior que as Notas #1 e #2");
		}
		else{
			printf("As Notas #1 e #3 são iguais e maiores que #2");	
		}
	}
	else if(nota2 > nota1){
		if(nota2 > nota3){
			printf("A Nota #2 é maior que as Notas #1 e #3");
		}
		else if(nota3 > nota)
	}
	
	printf("\nA média de Nota #1 com Nota #2 é igual a %.2f", media);
	
	return 0;
}
