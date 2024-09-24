#include <stdio.h>

#define MAX_OFERTAS 100  // Número máximo de ofertas no livro

// Estrutura que define uma oferta
typedef struct {
    int posicao;
    double valor;
    int quantidade;
} Oferta;

void imprimirLivro(Oferta livro[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d,%.2f,%d\n", livro[i].posicao, livro[i].valor, livro[i].quantidade);
    }
}

int main() {
    Oferta livro[MAX_OFERTAS];  // Array que representa o livro de ofertas
    int tamanho = 0;            // Número de ofertas no livro
    int n;                      // Número de notificações

    scanf("%d", &n);  // Lê o número de notificações

    for (int i = 0; i < n; i++) {
        int posicao, acao, quantidade;
        double valor;

        // Lê a notificação no formato: posição, ação, valor, quantidade
        scanf("%d,%d,%lf,%d", &posicao, &acao, &valor, &quantidade);

        if (acao == 0) {  // INSERIR
            // Desloca as ofertas para a direita para inserir na posição correta
            for (int j = tamanho; j >= posicao; j--) {
                livro[j] = livro[j - 1];
                livro[j].posicao = j + 1;  // Atualiza a posição
            }
            // Insere a nova oferta na posição especificada
            livro[posicao - 1].posicao = posicao;
            livro[posicao - 1].valor = valor;
            livro[posicao - 1].quantidade = quantidade;
            tamanho++;
        } else if (acao == 1) {  // MODIFICAR
            // Modifica a oferta existente
            if (valor != 0) {
                livro[posicao - 1].valor = valor;
            }
            if (quantidade != 0) {
                livro[posicao - 1].quantidade = quantidade;
            }
        } else if (acao == 2) {  // DELETAR
            // Remove a oferta da posição especificada
            for (int j = posicao - 1; j < tamanho - 1; j++) {
                livro[j] = livro[j + 1];
                livro[j].posicao = j + 1;  // Atualiza a posição
            }
            tamanho--;  // Reduz o tamanho do livro
        }
    }

    // Imprime o livro de ofertas atualizado
    imprimirLivro(livro, tamanho);

    return 0;
}