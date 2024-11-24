# Lista-com-Redimensionamento-Dinamico
Modificação de uma implementação de lista sequencial ordenada em C/C++ para que ela suporte redimensionamento dinâmico

Esta atividade tem como objetivo implementar uma lista sequencial ordenada com redimensionamento dinâmico. A lista deve começar com uma capacidade inicial de 50 elementos e ser capaz de se adaptar dinamicamente ao número de elementos inseridos ou removidos, otimizando o uso da memória. O funcionamento básico envolve:

Aumentar a Capacidade:

Quando o número de elementos atinge a capacidade máxima, a lista deve duplicar sua capacidade automaticamente utilizando alocação dinâmica com a função realloc.

Reduzir a Capacidade:

Quando o número de elementos na lista cai para 25% da capacidade atual, a lista deve reduzir sua capacidade para metade, liberando memória desnecessária.

Detalhes Relevantes para o Funcionamento do Código
Estrutura de Dados:

A lista é representada por um array dinâmico e gerenciada através de uma estrutura (LISTA) que contém:
Um ponteiro para o array dinâmico (A).
O número atual de elementos na lista (nroElem).
A capacidade máxima atual (capacidade).

Funções Principais:

inserirElemListaOrd: Insere um elemento na lista em ordem crescente e verifica se a capacidade precisa ser aumentada.
excluirElemLista: Remove um elemento da lista e verifica se a capacidade deve ser reduzida.
redimensionarLista: Ajusta dinamicamente a capacidade da lista (duplicando ou reduzindo) usando realloc.
reinicializarLista: Redefine a lista para o estado inicial, com capacidade de 50 elementos.

Cenários de Teste:

Inserir elementos até ultrapassar a capacidade inicial de 50, garantindo que a lista seja expandida para comportar mais elementos.
Remover elementos para reduzir o número de elementos até 25% da capacidade, demonstrando que a lista reduz a capacidade para metade.
Reinicializar a lista para verificar que ela retorna ao estado inicial com capacidade de 50.

As mudanças no código foram feitas por etapas e descritas nos commits
