# Rush01
# Rush01 - Skyscrapers Puzzle Solver

## Versão em Português (Pra Galera do Projeto)

### Visão Geral do Projeto


O projeto tá em C, dividido em vários arquivos pra ficar organizado:
- [`main.c`](main.c): Ponto de entrada, inicializa as regras de visão e controla o fluxo com [`ft_flux_control`](main.c).
- [`board.c`](board.c): Tem a função [`board`](board.c) pra imprimir o tabuleiro 4x4.
- [`check_board.c`](check_board.c): Funções de checagem tipo [`checkLine`](check_board.c) e [`checkColumn`](check_board.c) pra validar linhas e colunas sem repetições. (Nota: [`checkVision`](check_board.c) tá declarada mas ainda não implementada.)
- [`fill_board.c`](fill_board.c): Tem [`ft_fill_board`](fill_board.c), que tenta preencher o tabuleiro vazio com palpites (por enquanto é um loop simples, mas precisa melhorar pra resolver de verdade).
- [`header.h`](header.h): Arquivo de cabeçalho com protótipos das funções.
- [`allTogetherToCompileOnline.txt`](allTogetherToCompileOnline.txt): Arquivo combinado pra compilar online, com anotações sobre o que ainda falta, tipo implementar checagens de visão e parsing de entrada.

O rumo do projeto é completar o resolvedor fazendo:
1. Implementar [`checkVision`](check_board.c) direito pra validar as regras de visão (tipo contar prédios visíveis de cada direção).
2. Melhorar [`ft_fill_board`](fill_board.c) pra usar backtracking ou um algoritmo decente pra encontrar uma solução válida que obedeça tudo.
3. Adicionar parsing de entrada em [`main.c`](main.c) pra ler as regras de visão de argumentos de linha de comando ou uma string.
4. Integrar todas as checagens numa função principal que confirme se o tabuleiro tá resolvido.

Por enquanto, o código preenche o tabuleiro com um padrão básico e checa linhas/colunas, mas não resolve o quebra-cabeça completamente nem valida as visões.

### Mini Tutorial: Como Rodar o Programa
1. Certifica que tem um compilador C instalado (tipo GCC).
2. Compila com esse comando:

cc   main.c check_board.c fill_board.c board.c
```
3. Run the program:
```
./a.out;
```

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
## Project Overview
This project implements a solver for the Skyscrapers puzzle, a logic-based game where you fill a 4x4 grid with numbers from 1 to 4. The rules ensure:
- No duplicate numbers in any row or column.
- The numbers represent building heights, and the "vision" rules specify how many buildings are visible from each side (left, right, top, bottom) when looking towards the center.

The project is written in C and consists of multiple source files for modularity:
- [`main.c`](main.c): Entry point that initializes vision rules and controls the program flow via [`ft_flux_control`](main.c).
- [`board.c`](board.c): Contains the [`board`](board.c) function to print the current state of the 4x4 grid.
- [`check_board.c`](check_board.c): Implements checking functions like [`checkLine`](check_board.c) and [`checkColumn`](check_board.c) to validate rows and columns for uniqueness. (Note: [`checkVision`](check_board.c) is declared but not fully implemented yet.)
- [`fill_board.c`](fill_board.c): Contains [`ft_fill_board`](fill_board.c), which attempts to fill the empty board with guesses (currently a simple loop assigning values, but needs enhancement for full solving logic).
- [`header.h`](header.h): Header file with function prototypes.
- [`allTogetherToCompileOnline.txt`](allTogetherToCompileOnline.txt): A combined file for online C compilers, including notes on remaining tasks like implementing vision checks and parsing input strings.

The project's direction is to complete the solver by:
1. Fully implementing [`checkVision`](check_board.c) to validate against the vision rules (e.g., counting visible buildings from each direction).
2. Enhancing [`ft_fill_board`](fill_board.c) to use backtracking or a proper algorithm to find a valid solution that satisfies all rules.
3. Adding input parsing in [`main.c`](main.c) to read vision rules from command-line arguments or a string.
4. Integrating all checks into a main validation function that confirms the board is solved.

Currently, the code fills the board with a basic pattern and checks rows/columns, but does not yet solve the puzzle fully or validate visions.

## Mini Tutorial: How to Run the Program
1. Ensure you have a C compiler installed (e.g., GCC).
2. Compile the program using the following command:
```
