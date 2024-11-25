#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, nota3, maior1, maior2, media;
	
	printf("---STATUS DA MÉDIA DE NOTAS DO ESTUDANTE---\n\n");
	printf("Digite a Nota #1: ");
	scanf("%f", &nota1);
	
	printf("Digite a Nota #2: ");
	scanf("%f", &nota2);
	
	printf("Digite a Nota #3: ");
	scanf("%f", &nota3);
	
	
	if(nota1 == nota2 && nota1 == nota3){
		maior1 = nota1;
		maior2 = nota2;
	}
	else{
		if(nota1 > nota2){
			if(nota1 > nota3){
				maior1 = nota1;
				if(nota2>nota3){
					maior2 = nota2;
				}
				else{
					maior2 = nota3;
				}
			}
			else{
				maior1 = nota3;
				maior2 = nota1;
			}
		}
		else{
			if(nota2 > nota3){
				maior1 = nota2;
				if(nota3 > nota1){
					maior2 = nota3;
				}
				else{
					maior2 = nota1;
				}
			}
			else{
				maior1 = nota3;
				maior2 = nota2;
			}
		}
	}
	
	printf("\nPrimeira maior nota.... %.2f", maior1);
	printf("\nSegunda maior nota..... %.2f\n", maior2);
	
	media = (maior1 + maior2) / 2.0;
	
	printf("\nMédia.................. %.2f", media);
	printf("\nStatus................. ");
	if(media>=9){
		printf("Aprovado com louvor.");
	}
	else if(media>=8){
		printf("Aprovado com mérito.");
	}
	else if(media>=6){
		printf("Aprovado.");
	}
	else if(media>=4){
		printf("Em exame...");
	}
	else{
		printf("Reprovado.");
	}
	
	return 0;
}
