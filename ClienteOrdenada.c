#include "ListaOrdenada.h"

int main() {
    LISTA lista;
    REGISTRO reg;

    // Inicializar a lista
    inicializarLista(&lista);

    printf("Demonstração de eleemntos e tamanho inicial da lista:\n");
    exibirLista(&lista);  // Lista inicialmente
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

    // Teste 1: Inserção até ultrapassar a capacidade inicial 
    printf("Teste de inserção até superar a capacidade inicial (50 elementos):\n");
    for (int i = 1; i <= 101; i++) {
        reg.chave = i;
        inserirElemListaOrd(&lista, reg);  
    }
    exibirLista(&lista);  
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

    
    printf("\nTeste de remoção até reduzir capacidade para 25 por cento (E reduzir a lista para metade):\n");
    for (int i = 60; i >= 1; i--) {
        excluirElemLista(&lista, i);  
    }
    exibirLista(&lista);  
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

    // Teste 3: Reinicialização da lista
    printf("\nTeste de reinicialização da lista:\n");
    reinicializarLista(&lista);  
    exibirLista(&lista);  
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

    return 0;
}

