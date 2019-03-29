/*  Monica Adeyanju 
    Group Project */

/* Defining the columns and rows */
#define NUM_ROWS 6
#define NUM_COLUMNS 9
int numofplayers;

/* Defining the type of squares and tokens */
enum stype
{
    NORMAL, OBSTACLE
};

enum color 
{
    RED, BLUE, GREEN, YELLOW, PINK, ORANGE
};

/* Defining a token and each token is associated with a colour */
typedef struct token
{
   enum color col; 
    
}
token;

/* Defining the squares */
typedef struct square
{
    /* A square can be a NORMAL or an OBSTACLE square */
     enum stype type;
     /* The stack of tokens that can be placed on the board square */
     token *stack;      
}
square;

/*  You need to fill this data structure
    with the information about the player
    such as a name and a colour. */
typedef struct player
{
    enum color col;
    char names[6][20];
    
}
player; 


/*  This function creates the board for the first time
    Input: board - a 6x9 array of squares   */
void initialize_board(square board[NUM_ROWS][NUM_COLUMNS]);
    
    
   
    
    

/* This function creates players for the first time
   Input: the array of players to be initialised
   Output: The number of players of the game */
int initialize_players(player players[]);
