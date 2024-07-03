#include <stdio.h>

int main() {
    printf("Tamanho de int: %lu bytes\n", sizeof(int));
    printf("Tamanho de float: %lu bytes\n", sizeof(float));
    printf("Tamanho de char: %lu bytes\n", sizeof(char));
    printf("Tamanho de double: %lu bytes\n\n\n", sizeof(double));
    
	int array[10];
    printf("Tamanho do array: %lu bytes\n", sizeof(array));
    printf("Número de elementos no array: %lu\n", sizeof(array) / sizeof(array[0]));
    return 0;
}
