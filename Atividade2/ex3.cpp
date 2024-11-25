#include <stdio.h>
#include <locale.h>

int calculoFibonacci(int n);

int main(){
	int n;
	setlocale(LC_ALL, "Portuguese");
	
	printf("---Sequência de Fibonacci---\n");
	printf("Qual a posição da sequência de Fibonacci você deseja? ");
	scanf("%d", &n);
	
	printf("\nA posição %d na sequência de Fibonacci possui o número %d", n,calculoFibonacci(n));
	
	return 0;
}

int calculoFibonacci(int n){
	int f[n], i;
	
	f[0] = 1;
	f[1] = 1;
	
	for(i=2; i<=n; i++){
		f[i] = f[i-1]+f[i-2];	
	}
	
	return f[n];
}
