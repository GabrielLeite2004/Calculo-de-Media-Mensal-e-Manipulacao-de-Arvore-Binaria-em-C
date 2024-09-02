# Cálculo de Média Mensal e Manipulação de Árvore Binária em C

## Descrição
Este projeto em C implementa uma série de funções para manipulação de uma árvore binária e cálculo da média mensal de valores contidos nos nodos da árvore. O sistema é utilizado para processar dados coletados e agrupados por meses, calculando a média de vendas por mês e exibindo os resultados.

## Funcionalidades
- **Cópia de Elementos**: Funções para copiar dados entre elementos e verificar se dois elementos são iguais.
- **Cálculo de Média Mensal**: Função que calcula e exibe a média dos valores de vendas agrupados por mês.
- **Manipulação da Árvore Binária**: Funções para inserir nodos na árvore e manipular sua estrutura.
  
## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o arvore_binaria arvore_binaria.c
   ```
2. Execute o programa:
   ```bash
   ./arvore_binaria
   ```
3. Utilize as funções implementadas para carregar os dados, copiar elementos, calcular médias mensais e manipular a árvore binária conforme necessário.

## Estrutura de Dados
O projeto utiliza uma estrutura de árvore binária (`tree`) para armazenar os dados lidos dos arquivos CSV. Cada nodo na árvore contém um `elemento` ou `elemento1`, que inclui diversas informações como região, estado, município, revenda, valores de venda, etc.

## Funções Principais
- **copiarElemento(elemento1 *destino, const elemento1 origem)**: Copia os dados de um `elemento1` para outro.
- **copiarElemento2(elemento *destino, const elemento origem)**: Copia dados selecionados de um `elemento` para outro.
- **elementos_iguas(elemento1 item1, elemento1 item2)**: Verifica se dois `elemento1` são iguais.
- **Calcula_media(tree tr, int tipo)**: Calcula e exibe a média mensal dos valores de venda contidos na árvore binária.

## Cálculo de Médias Mensais
A função `Calcula_media` percorre a árvore binária e acumula os valores de venda por mês. Os resultados são então divididos pelo número de ocorrências em cada mês para calcular a média, que é exibida em um formato de tabela.

## Exemplo de Saída
A função `Calcula_media` gera uma saída formatada mostrando a média dos valores de venda para cada mês do ano:
```
-----------------------------------------------------------------
Janeiro: 120.50 R$
Fevereiro: 110.75 R$
...
Dezembro: 130.00 R$
-----------------------------------------------------------------
```

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
```

Esse README fornece uma visão detalhada das funcionalidades do código, explicando como ele pode ser utilizado e quais são as suas principais características. Se precisar de ajustes ou tiver outras dúvidas, estou aqui para ajudar!Aqui está o título sugerido para o repositório no GitHub e o conteúdo para o README:

### Título do Repositório
**Cálculo de Média Mensal e Manipulação de Árvore Binária em C**

### README.md

```markdown
# Cálculo de Média Mensal e Manipulação de Árvore Binária em C

## Descrição
Este projeto em C implementa uma série de funções para manipulação de uma árvore binária e cálculo da média mensal de valores contidos nos nodos da árvore. O sistema é utilizado para processar dados coletados e agrupados por meses, calculando a média de vendas por mês e exibindo os resultados.

## Funcionalidades
- **Cópia de Elementos**: Funções para copiar dados entre elementos e verificar se dois elementos são iguais.
- **Cálculo de Média Mensal**: Função que calcula e exibe a média dos valores de vendas agrupados por mês.
- **Manipulação da Árvore Binária**: Funções para inserir nodos na árvore e manipular sua estrutura.
  
## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o arvore_binaria arvore_binaria.c
   ```
2. Execute o programa:
   ```bash
   ./arvore_binaria
   ```
3. Utilize as funções implementadas para carregar os dados, copiar elementos, calcular médias mensais e manipular a árvore binária conforme necessário.

## Estrutura de Dados
O projeto utiliza uma estrutura de árvore binária (`tree`) para armazenar os dados lidos dos arquivos CSV. Cada nodo na árvore contém um `elemento` ou `elemento1`, que inclui diversas informações como região, estado, município, revenda, valores de venda, etc.

## Funções Principais
- **copiarElemento(elemento1 *destino, const elemento1 origem)**: Copia os dados de um `elemento1` para outro.
- **copiarElemento2(elemento *destino, const elemento origem)**: Copia dados selecionados de um `elemento` para outro.
- **elementos_iguas(elemento1 item1, elemento1 item2)**: Verifica se dois `elemento1` são iguais.
- **Calcula_media(tree tr, int tipo)**: Calcula e exibe a média mensal dos valores de venda contidos na árvore binária.

## Cálculo de Médias Mensais
A função `Calcula_media` percorre a árvore binária e acumula os valores de venda por mês. Os resultados são então divididos pelo número de ocorrências em cada mês para calcular a média, que é exibida em um formato de tabela.

## Exemplo de Saída
A função `Calcula_media` gera uma saída formatada mostrando a média dos valores de venda para cada mês do ano:
```
-----------------------------------------------------------------
Janeiro: 120.50 R$
Fevereiro: 110.75 R$
...
Dezembro: 130.00 R$
-----------------------------------------------------------------
```

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
