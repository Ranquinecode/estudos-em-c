//segundo exemplo, aula 6 da playlist
// o preimeiro exemplo está na aula 4, precisa fazer.
#include <stdio.h>
int main(){
	int idade;
	float salario;
	char sexo;
	printf("Voce tem quantos anos?\n");
	scanf (" %d", &idade);
	
	printf("Quanto voce recebe de salario?\n");
	scanf("%f", &salario);
	
	printf ("Voce e homem ou mulher?\n");
	scanf (" %c", &sexo);
	
	printf("\n\nidade:%d.\n",idade);
	printf("salario:%.2f.\n",salario);
	printf("sexo:%c.\n",sexo);
	
	printf("Voce possui %d anos, recebe %.2f por mes e eh do sexo %c.\n\n\n",idade,salario,sexo);
	return 0;
}
