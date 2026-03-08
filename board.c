#include <stdio.h>
#include "header.h"

void board(int empty_board[4][4]) {
      
	for(int x = 0; x < 4; x++){
        
        for(int i = 0; i < 4; i++){
               printf("| %d  |", empty_board[x][i]);
              
               if(i == 3){
                    printf("\n");
               }
        }
    };

}