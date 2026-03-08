#include <stdio.h>
#include "header.h"

int main(void) {
    // regras de visao que serao o input recebido por string no futuro
	int visionRules[4][4] = {{2, 4, 3, 2}, {3, 1, 2, 4}, {2, 1, 3, 4}, {0, 3, 0, 4}};
    //funcao que controla o fluxo de funçoes do programa
	ft_flux_control(visionRules);
    return 0;
}

// recebe as regras de visao da main
int ft_flux_control(int vision_rules[4][4]){
	
	// gera o tabuleiro vazio, na mesma variavel fixa que será usada para o programa alterar ("chutar" numeros)
	int empty_board[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    //função responsavel por fazer as alterações no tabuleiro (empty_board)
	ft_fill_board(empty_board);
	return (0);	
			   
}