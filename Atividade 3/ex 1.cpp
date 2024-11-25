#include <stdio.h>
#include <locale.h>

typedef struct{
	double peso; 
	int idade; 
	double altura; 
} pessoa;

void imprimePessoa(pessoa p);
int inserirPessoas(pessoa pessoas[]);

int main(){
	int i;
	pessoa pessoas[5];
	
	inserirPessoas(pessoas);
	
	for (i = 0; i < 5; i++) { 
        imprimePessoa(pessoas[i]);
    }
	
	return 0;
}

void imprimePessoa(pessoa p){
	printf("Peso: %.2lf. Idade: %d. Altura: %.2lf. \n\n", p.peso, p.idade, p.altura); 
}

int inserirPessoas(pessoa pessoas[]){
	int i;
	for(i=0; i<5; i++){
		printf("---Inserindo Dados da Pessoa #0%d ---\n", i+1);
		
		printf("Peso: ");
		scanf("%lf", &pessoas[i].peso);
		
		printf("Idade: ");
		scanf("%d", &pessoas[i].idade);
		
		printf("Altura: ");
		scanf("%lf", &pessoas[i].altura);
	}
	return pessoas;
}
