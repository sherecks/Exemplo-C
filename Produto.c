#include "Produto.h"
#include <stdio.h>
#include <string.h>

char *nomes[] = {
    "Borracha", "Caderno", "Caneta",
	"Bloco de Notas", "Grafite", "Regua",
	"Papel A4", "Giz", "Apontador", "Lapis"
	};
				  
				  
int n = sizeof( nomes ) / sizeof( char* );


void gera_produto( Produto *p ){
	srand(time());
	p->codigo = rand() % 1000;
	strcpy( p->descricao, nomes[ rand() % n ] ) ;
	p->preco = rand() % 100 / 5.0;
}

void le_produto( Produto *p ){
	printf("Digite o codigo: ");
	scanf("%d", &p->codigo );
	printf("Digite a descricao: ");
	scanf("%s", p->descricao );
	printf("Digite o preco: ");
	scanf("%f", &p->preco );	
}

void mostra_produto( Produto p ){
	printf("(%d, %s, R$%.2f)\n", p.codigo, p.descricao, p.preco);
}

