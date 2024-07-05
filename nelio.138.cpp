#include <stdio.h>
#include <string.h>

int main () {

    int idade;
    double salario, altura;
    char sexo;
    char nome [50];

    idade = 20;
    altura = 1.79;
    salario = 1299.98;
    sexo = 'M';
    strcpy( nome, "Anthony Ranquine" );

    printf ("\nOla %s!, seja bem vindo ao C!\n", nome);
    printf ("Sua altura eh de %f \n", altura);
    printf ("E voce possui %d anos. \n", idade);
    printf ("Recebe um salario de R$%f .\n", salario);
    printf ("Alem disso, eh do sexo %c.\n\n\n", sexo);
    

    return 0;
}