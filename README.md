# Resolução dos desafios de programação - Quero ser Intelitrader

## (pular bullshit) Links para as resoluções dos desafios:

Para executar os códigos usando um compilador online:

* Criptografia do Navio: [veja a solução](https://onlinegdb.com/TGNlS5px7H)
* Livro de Ofertas: [veja a solução](https://onlinegdb.com/W9kmXUG4ql)

## Descrição

Este repositório contém a solução para dois desafios propostos, como parte do processo de seleção para a Intelitrader. As soluções são implementadas em C e abordam os seguintes problemas:

1. **Criptografia do Navio**: Um problema envolvendo manipulação de bits para descriptografar uma mensagem.

2. **Livro de Ofertas**: Um sistema de registro de ordens de compra e venda em um livro de ofertas com operações de inserção, modificação e remoção.

## Estrutura do repositório

A estrutura de diretórios do repositório está organizada da seguinte maneira:

```bash
.
├── .git/                              # Arquivos de controle do Git
├── exercicios/
│   ├── criptografia_navio/             # Desafio 1: Criptografia do Navio
│   │   └── main.c                      # Código-fonte da solução do desafio
│   ├── livro_de_ofertas/               # Desafio 2: Livro de Ofertas
│   │   └── main.c                      # Código-fonte da solução do desafio
└── README.md                           # Documentação do repositório

```

## Desafio 1: Criptografia do Navio

O problema consiste em descriptografar uma mensagem onde os dois últimos bits de cada byte estão invertidos e os 4 primeiros bits de cada byte foram trocados com os últimos 4 bits. A mensagem é lida como uma sequência de bits e precisa ser transformada em uma mensagem legível em ASCII.

### Código-Fonte

O código para o desafio está localizado em `exercicios/criptografia_navio/main.c`.

### Instruções para compilar e executar

1. Navegue até o diretório do desafio:

```bash
cd exercicios/criptografia_navio
```

2. Compile o programa:

```bash
gcc -o criptografia main.c
```

3. Execute o programa:

```bash
./criptografia
```

### Solução do Problema

O programa segue os seguintes passos:

1. Processa uma string de bits que representa a mensagem criptografada.
2. Inverte os dois últimos bits de cada byte.
3. Troca os 4 primeiros bits com os 4 últimos.
4. Converte cada byte resultante em um caractere ASCII.
5. Imprime a mensagem descriptografada.

### Exemplo de saída:

```
YOU ARE AWESOME
```

## Desafio 2: Livro de Ofertas

Este desafio simula um sistema de livro de ofertas, permitindo a inserção, modificação e remoção de ordens de compra e venda de um produto. As ordens são atualizadas conforme as notificações recebidas e o sistema deve manter o livro organizado.

### Código-Fonte

O código para o desafio está localizado em `exercicios/livro_de_ofertas/main.c`.

### Instruções para compilar e executar

1. Navegue até o diretório do desafio:

```bash
cd exercicios/livro_de_ofertas
```

2. Compile o programa:

```bash
gcc -o livro_ofertas main.c
```

3. Execute o programa:

```bash
./livro_ofertas
```
### Solução do Problema

O programa segue os seguintes passos:

1. Lê o número de notificações.

2. Para cada notificação:
    * Inserir: Insere uma nova oferta, deslocando as existentes para a direita, se necessário.
    * Modificar: Modifica uma oferta existente na posição especificada.
    * Deletar: Remove uma oferta e ajusta o livro.

3. Imprime o livro de ofertas atualizado no formato solicitado.

### Exemplo de entrada:

```
12
1,0,15.4,50
2,0,15.5,50
2,2,0,0
2,0,15.4,10
3,0,15.9,30
3,1,0,20
4,0,16.50,200
5,0,17.00,100
5,0,16.59,20
6,2,0,0
1,2,0,0
2,1,15.6,0
```

### Exemplo de saída:

```
1,15.4,10
2,15.6,20
3,16.50,200
4,16.59,20
```

## Tecnologias Utilizadas

* Linguagem de Programação: C
* Compilador: GCC
* Ambiente: WSL (Windows Subsystem for Linux)

## Como Executar os Desafios

1. Clone o repositório:

```bash
git clone https://github.com/yohanaff/quero-ser-intelitrader.git
cd quero-ser-intelitrader
```

2. Navegue até o diretório do desafio que deseja compilar e execute os comandos conforme as instruções.