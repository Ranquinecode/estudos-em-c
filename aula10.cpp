//// Aula 10 - Comandos Condicionais IF ELSE - Parte 1

#include<stdio.h>

int main(){
	
	printf("\nex1________________________________________");
	
	int x;
	printf("\n\nInforme o numero:	");
	scanf("%d", &x);
	
	if (x%2==0){
		printf("			Este eh um numero par.\n");
	}
	
	else {
		printf("			Este numero eh impar.\n");
	}
	
	//posso ainda, resolver com variavel booleana.
	//0 significa falso e qualquer valor diferente disso é verdadeiro.

	printf("\nex2________________________________________");
	
	printf("\n\nAgora, vamos resolver da maneira booleana.\n");
	
	int y;
	bool eh_impar;
	printf("Informe o numero:	");
	scanf("%d", &y);
	
	eh_impar = y%2;
	
	if (y%2==0){
		printf("			O numero eh par\n");
	}
	else {
		printf("			O numero eh impar.\n");
	}
	
	printf("\nex3_______________________________________");
		
	//Em um terceiro caso, podemos usar a variavel booleana com
	//valores false ou true:
	printf("\n\nAgora, vamos resolver da maneira booleana usando false (ou true).\n");
	
	int z;
	bool eh_imppar;
	printf("Informe o numero:	");
	scanf("%d", &z);
	
	eh_imppar = z%2;
	
	if (eh_imppar == false){
		printf("			O numero eh par\n");
	}
	else {
		printf("			O numero eh impar.\n");
	}
	
	printf("\nex4_______________________________________");
	
	printf("\n\nAgora, vamos resolver da maneira booleana usando o not ( ! ).\n");
	int w;
	bool eh_imparr;
	printf("Informe o numero:	");
	scanf("%d", &w);
	
	eh_imparr = w%2;
	
	if (!eh_imparr){
		printf("			O numero eh par\n");
	}
	else {
		printf("			O numero eh impar.\n");
	}
	printf("\n_______________________________________");
}


