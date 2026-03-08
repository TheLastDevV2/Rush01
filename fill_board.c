#include <stdio.h>
#include "header.h"


void ft_fill_board(int empty_board[4][4]){
    
    // range é o alcance de numeros que o programa pode chutar
    int range[4] = {1, 2, 3, 4};
	
	
	//estou trabalhando uma forma do programa chutar um número e validar
	for( int x = 0; x < 4; x ++){
	    for(int y = 0; y < 4; y++){
	        if(empty_board[x][y] == 0){
	            empty_board[x][y] = range[y];
	          
	        }
	        
	    }
	}
	empty_board[0][3] = 1;


    checkColumn(empty_board);
	
};