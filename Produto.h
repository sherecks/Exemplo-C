//Produto.h

typedef struct {
	int codigo;
	char descricao[20];
	float preco;
} Produto;

void gera_produto( Produto *p );
void le_produto( Produto *p );
void mostra_produto( Produto p );

