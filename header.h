// declaracao de funcoes que serao usadas em mais de um arquivo, 
//para evitar erros de "implicit declaration of function" e facilitar a leitura do código

// linha check;
// receber, validar e comparar.
void checkLine(int empty_board[4][4]);
void checkColumn(int empty_board[4][4]);
void checkVision(int empty_board[4][4], int visionRules[4][4]);

// linha board;
// criação, print e preenchimento do tabuleiro.
void ft_fill_board(int empty_board[4][4]);
void board(int empty_board[4][4]);

// linha main;
// onde está planejado para ser o core do programa
int ft_flux_control(int vision_rules[4][4]);