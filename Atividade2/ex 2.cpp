#include <stdio.h>
#include <locale.h>

float mediaTurma(int qtdeTurmas, int qtdeAlunos);
float mediaEscola(int qtdeTurmas);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qtdeTurmas, qtdeAlunos;
	float mediaEscolar;
	
	printf("Insira a QUANTIDADES DE TURMAS da escola:");
	scanf("%d", &qtdeTurmas);
	
	mediaEscolar = mediaEscola(qtdeTurmas);
	
	printf("\nA média de notas geral da escola é igual a %.2f", mediaEscolar);
	
	
	return 0;
}

float mediaTurma(int qtdeTurmas, int qtdeAlunos){
	int turma, aluno;
	float notasTurmas[qtdeTurmas], nota, somaTurma;
	
	for(turma=0; turma<qtdeTurmas; turma++){
		printf("\n---Turma %d---\n", turma+1);
		for(aluno=0; aluno<qtdeAlunos; aluno++){
			printf("Insira a nota do aluno %d:", aluno+1);
			scanf("%f", &nota);
			
			notasTurmas[turma] = notasTurmas[turma]+nota;
		}
		notasTurmas[turma] = notasTurmas[turma]/qtdeAlunos;
	}
	
	for(turma=0; turma<qtdeTurmas; turma++){
		printf("\nA Turma %d teve média igual a %.2f \n", turma+1, notasTurmas[turma]);
	}
	
	for(turma=0; turma<qtdeTurmas; turma++){
		somaTurma = somaTurma + notasTurmas[turma];
	}
	somaTurma = somaTurma/qtdeTurmas;
	
	return somaTurma;
}

float mediaEscola(int qtdeTurmas){
	int qtdeAlunos, turma;
	float notaEscola;
	
	printf("Insira a QUANTIDADE DE ALUNOS em CADA TURMA nessa escola:");
	scanf("%d", &qtdeAlunos);
	
	notaEscola = mediaTurma(qtdeTurmas, qtdeAlunos);
	
	return notaEscola;	
}
