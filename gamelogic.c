#include "game.h"
#include <stdio.h>

void printLine();

/*  Returns the first letter associated with the colour of the token
    Input: t - pointer to a token
    Output: initial of the colour of the token */
char print_token(token *t)
{
    if((*t).col== PINK) return 'P';
    if((*t).col== RED) return 'R';
    if((*t).col== BLUE) return 'B';
    if((*t).col== GREEN) return 'G';
    if((*t).col== ORANGE) return 'O';
    if((*t).col== YELLOW) return 'Y';
    return '\0';
}

/* Prints the board
    Input: the board to be printed. */
void print_board(square board[NUM_ROWS][NUM_COLUMNS])
{
    printf("                THE BOARD\n");
    
    for(int i =0; i < NUM_ROWS; i++)
    {
        /* prints an horizontal line */
        printLine();
        
        /* prints the row number */
        printf(" %d ", i);
        char c = '\0' ;
        
        /* if the square (i,j) is occupied, c is assigned the initial of the colour 
           of the token that occupies the square */
        for (int j = 0; j < NUM_COLUMNS; j++)
        {
            if(board[i][j].stack != NULL)
            {
                c = print_token(board[i][j].stack);
            }
            
            /* if the square (i,j) is empty */
            else
            {
                /* c is assigned 'X' if the square represents an obstacle */
                if(board[i][j].type == OBSTACLE)
                    c = 'X';
                /* c is assigned an empty space otherwise */
                else c = ' ';
            }
            
            printf("| %c ", c);
        }
        printf ("|\n");
    }
    
    printLine();
    /* prints the number of the columns at the end of the board */
    printf("     0   1   2   3   4   5   6   7   8\n");
}

void printLine()
{
    printf("   -------------------------------------\n");  
}

/*  Place tokens in the first column of the board 
    Input: board - a 6x9 array of squares that represents the board
    players - the array of the players
    numPlayers - the number of players */
void place_tokens(square board[NUM_ROWS][NUM_COLUMNS], player players[], int numPlayers)
{
    /* Variables for selected square and number of tokens */
    int minimumTokens = 0;
    int selectedSquare = 0;
    int i, j;
    
    for(i=0;i<4;i++)   
    {
        for(j=0;j<numPlayers;j++)
        {
            printf("Player %d, please select a square\n", (j+1));
            scanf("%d", &selectedSquare);
            
            if((selectedSquare==minimumTokens) && (players[j][20].col = players[j][20].col ))
            {
                printf("Error, please select a new square");
                scanf("%d", &selectedSquare);
            }
            
            board[selectedSquare][0].stack = (token *)malloc(sizeof(token));
            board[selectedSquare][0].stack->col = player[j].col;
            board[selectedSquare][0].numTokens++;
        
            if(((numPlayers*i) + j + 1)%NUM_ROWS == 0)
            {
                minimumTokens++;
            }
            
            
            
        }
    
    
    
    
    
    }
    
    
    

}
void play_game(square board[NUM_ROWS][NUM_COLUMNS], player players[], int numPlayers)
{
    //TO BE IMPLEMENTED
}



