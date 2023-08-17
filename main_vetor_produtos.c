#include <stdio.h>
#include <stdlib.h>
#include "Produto.h"
#include <time.h>

typedef int inteiro;

int main(int argc, char *argv[]) {
	
	inteiro n, i;
	printf("Quantos produtos? ");
	scanf("%d", &n);
	
	srand( time( 0 ) );
	
	Produto *v = malloc( sizeof(Produto) * n );	
	for( i = 0 ; i < n ; i++ ){
		gera_produto( &v[i] );
	}
	printf("Lista de produtos cadastrados:\n");
	for( i = 0 ; i < n ; i++ ){
		printf("Produto %d: ", i+1);
		mostra_produto( v[i] );
	}
	
	free( v );
	
	return 0;
}

