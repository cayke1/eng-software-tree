# Árvore

## Sobre o Projeto

Este projeto implementa uma estrutura de árvore em linguagem C, oferecendo um conjunto de funcionalidades robustas para manipulação de dados hierárquicos.

## Estrutura do Projeto

### Alterações Recentes

- Adicionado o arquivo principal (`main.c`), que atua como ponto de integração para a biblioteca tree.
- Inclusão do cabeçalho (`tree.h`) da biblioteca tree, expondo suas funções e interfaces para utilização.
- Implementação inicial da estrutura básica da biblioteca tree, oferecendo um ponto de partida sólido para o desenvolvimento futuro.
- Adicionada a função create_tree() no arquivo tree.c para criar uma nova árvore.
- Adicionada a função create_node() no arquivo tree.c, para alocar memória para um novo nó.
- Adicionada a função search_tree() no arquivo tree.c, para procurar se um nó existe ou não.
- Adicionada a função add_node() no arquivo tree.c, para adicionar um nó à árvore.
- Adicionada as funções minimum() e maximum() que retornam o último nó à esquerda e o último nó à direita da árvore, respectivamente.
- Adicionada a função remove_node() no arquivo tree.c, para remover um nó da árvore, caso ele exista
- Adicionada a função pre_order() no arquivo tree.c, para imprimir a árvore em pré-ordem.

## Correções
- Corrigido erro de verificação de nó para removê-lo da árvore.
- Corrigido erro de sintaxe da função pre_order().
- Corrigida falta de uma linha de código na main() para remoção dos nós.

## Como Usar

Para utilizar esta biblioteca em seu projeto:

1. **Inclua o Header**: Importe o arquivo `tree.h` em seu código para acessar as funcionalidades da árvore.
2. **Integre a Biblioteca**: Utilize o arquivo `main.c` como ponto de partida para integrar a biblioteca à sua aplicação.
3. **Compile e Execute**: Compile os arquivos fonte e execute seu programa para começar a utilizar a estrutura de árvore.

## Contribuições
Contribuições são bem-vindas! Se você deseja melhorar esta biblioteca ou adicionar novos recursos, sinta-se à vontade para enviar um pull request.
