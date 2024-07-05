#include<stdio.h>
#include<math.h>
int main (){
	
	int t1, t2, t3, p1, p2, p3;
	printf("\n__________________________________________");
	printf("\n>>>>>>>>>>>>>>TRABALHOS:<<<<<<<<<<<<<<<<<<");
	printf("\ninsira a nota do primeiro trabalho:\n");
	scanf("%d", &t1);
	
	printf("\ninsira a nota do segundo trabalho:\n");
	scanf("%d", &t2);
	
	printf("\ninsira a nota do terceiro trabalho:\n");
	scanf("%d", &t3);
	
	float notaT = (t1+t2+t3)/3.0;
	printf("	~~~~A media dos seus trabalhos eh %.2f\n",notaT );
	printf("\n__________________________________________");
	
	printf("\n>>>>>>>>>>>>>>>>PROVAS:<<<<<<<<<<<<<<<<<<<");
	printf("\ninsira a nota do primeira prova:\n");
	scanf("%d", &p1);
	
	printf("\ninsira a nota do segunda prova:\n");
	scanf("%d", &p2);
	
	printf("\ninsira a nota do terceira prova:\n");
	scanf("%d", &p3);
	
	float notaP = (p1+2*p2+3*p3)/6.0;
	printf("	~~~~A media das suas provas eh %.2f\n",notaP );
	
	printf("\n__________________________________________\n");
	
	float mediaF = (notaT+notaP) /2.0;
	printf("	SUA MEDIA FINAL EH: %.2f\n", mediaF);
			if (mediaF >= 6.0) {
			printf ("	Parabens! voce foi APROVADO");
		}
	
		else if (mediaF >= 4.0) {
			printf("	Voce esta de RECUPERACAO.");
		}
	
		else if (mediaF < 4) {
			printf("	Voce foi REPROVADO!");
		}
	printf("\n__________________________________________\n");
	return 0;
}
