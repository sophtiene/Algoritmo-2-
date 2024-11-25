#include <stdio.h>
#include <locale.h>

int calculoFibonacci(int n);

int main(){
	int n;
	setlocale(LC_ALL, "Portuguese");
	
	printf("---Sequ�ncia de Fibonacci---\n");
	printf("Qual a posi��o da sequ�ncia de Fibonacci voc� deseja? ");
	scanf("%d", &n);
	
	printf("\nA posi��o %d na sequ�ncia de Fibonacci possui o n�mero %d", n,calculoFibonacci(n));
	
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
