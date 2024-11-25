#include <stdio.h>

int main(void){
	struct ficha_de_aluno{
		char nome[50];
		char disciplina[30];
		double nota_prova1;
		double nota_prova2;
	};
	
	struct ficha_de_aluno aluno;
	
	printf("\n----------------- Cadastro de aluno -----------------\n");
	
	printf("Nome do aluno ......................: ");
	fgets(aluno.nome, 50, stdin);
	
	printf("Disciplina ..........................: ");
	fgets(aluno.disciplina, 30, stdin);
	
	printf("Informe a primeira nota .............: ");
	scanf("%lf", &aluno.nota_prova1);
	
	printf("Informe a segunda nota ..............: ");
	scanf("%lf", &aluno.nota_prova2);
	
	printf("\n------------- Lendo os dados da struct -------------\n");
	printf("Nome ......................: %s", aluno.nome);
	printf("Disciplina ................: %s", aluno.disciplina);
	printf("Nota Prova#01 .............: %.2lf \n", aluno.nota_prova1);
	printf("Nota Prova#02 .............: %.2lf \n", aluno.nota_prova2);
	
	return 0;
}
