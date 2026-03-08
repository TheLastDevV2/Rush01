#include <stdio.h>
#include "header.h"


void checkLine(int empty_board[4][4]);
void checkColumn(int empty_board[4][4]);

//função para chear a visão, ou seja, comparar o tabuleiro com as regras de visão

//void checkVision(int empty_board[4][4], int visionRules[4][4]);

//void checkVision(int empty_board[4][4], int visionRules[4][4]){
    
    
//};


//função que checa a linha.
void checkLine(int empty_board[4][4]){
    int hidden[4] = {0, 0, 0, 0 };
                    // numeros nao vistos
    for(int i = 0; i <= 3; i ++){

        int add = empty_board[0][i];
        if(hidden[add] == 1){
           // numero ja existe na coluna!
             
        }
        else if(hidden[add] == 0){
         // numero adicionado aos lidos
            hidden[add] = 1;
        }
    }
};

// checa a coluna sentido cima baixo : |
//  {| : INICIO}, {O : FIM}                O
void checkColumn(int empty_board[4][4]){
       
    int hidden[4] = {0, 0, 0, 0 };
                    // numeros nao vistos
    for(int i = 0; i <= 3; i ++){

        int add = empty_board[i][0];
        if(hidden[add] == 1){
           // numero ja existe na coluna!
             
        }
        else if(hidden[add] == 0){
         // numero adicionado aos lidos

            hidden[add] = 1;
        }
    }
    board(empty_board);
}