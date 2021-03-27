# Adicionar as seguintes funcionalidades:

## a) Atualizar as informações de um livro existente no sistema (1pt)

Passos: buscar pelo livro a ser atualizado, se existir, atualizar seus campos e confirmar atualização.

## b) Excluir um livro existente do sistema (2pts)

Sugestão: para excluir um livro, será necessário remanejar os livros à direita uma posição para a esquerda, excrevendo sobre o livro a ser removido (remoção de elemento sobre um vetor).

Exemplo:

Vetor: [4 7 6 8 9 2 1]

Chave para remoção: 8

Busca sequencial:

[4 7 6 8 9 2 1]

Remanejamento a partir da posição do 8:

[4 7 6 8 9 2 1]: sobrescrevendo o 9 sobre o 8

[4 7 6 9 9 2 1]: sobrescrevendo o 2 sobre o 9

[4 7 6 9 2 2 1]: sobrescrevendo o 1 sobre o 2

[4 7 6 9 2 1 1]: decrementando o tamanho do vetor (tamanho -1), última posição vira lixo

[4 7 6 9 2 1 1]: vetor final, sem a chave (8)

Exemplo de código similar: LINK (Links para um site externo.)

## c) Pesquisar por uma palavra chave existente no título, autor ou assunto do livro (2pts)

Sugestão: ao pesquisar por uma palavra, crie uma única string contendo o título, autor e assunto (via concatenação de Strings, strcat(), string.h (Links para um site externo.)), e utilize a função strstr() (string.h) (Links para um site externo.) para pesquisar uma string dentro de outra string.

Apresente seus comentários/decisões tomadas durante o desenvolvimento.

Procure resolver o problema por partes, sempre testando/validando o algoritmo desenvolvido por partes.