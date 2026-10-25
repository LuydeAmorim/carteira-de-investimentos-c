# Carteira de Investimentos em C

Projeto desenvolvido como parte da CP1 da graduação em Ciência da Computação.

## Sobre o projeto

A Carteira de Investimentos é uma aplicação de terminal desenvolvida em linguagem C com o objetivo de praticar lógica de programação, modularização e operações matemáticas aplicadas a investimentos.

O projeto também se relaciona ao **Objetivo de Desenvolvimento Sustentável 8 (ODS 8)**, especialmente à meta 8.10, que aborda a ampliação do acesso a serviços financeiros.

## Funcionalidades

- **Cadastrar ativo:** informa nome, categoria, quantidade, preço de compra e preço atual.
- **Calcular rentabilidade e lucro:** calcula a variação percentual e o resultado financeiro do ativo.
- **Classificar risco:** classifica o resultado conforme as regras definidas no projeto.
- **Menu interativo:** permite acessar as funcionalidades e encerrar o programa.

## Tecnologias e conceitos

- Linguagem C
- Estruturas de repetição (`while`)
- Estruturas condicionais (`if/else`)
- Seleção de opções (`switch`)
- Funções e modularização
- Operações matemáticas e entrada de dados

## Estrutura dos arquivos

- `main.c`: menu principal e controle do programa.
- `funcoes.c`: implementação das funcionalidades.
- `funcoes.h`: declarações das funções.
- `README.md`: documentação do projeto.

## Como compilar e executar

É necessário ter um compilador C, como o GCC, instalado e disponível no terminal.

Na pasta do projeto, execute:

```bash
gcc -Wall -Wextra -Wpedantic main.c funcoes.c -o programa
```

No Windows, execute o programa com:

```bash
programa.exe
```

No Linux, execute com:

```bash
./programa
```

## Objetivo acadêmico

Este projeto foi desenvolvido para consolidar os fundamentos da programação em C, com foco na organização do código em múltiplos arquivos e na implementação de funcionalidades por meio de funções.

---

Projeto acadêmico — Ciência da Computação.
