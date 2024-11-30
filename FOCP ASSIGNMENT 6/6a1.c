#include <stdio.h>

char board[3][3];
int i,j; 

void initializeBoard(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j]=' ';
        }
    }
}

void printBoard(){
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %c ", board[i][j]);
            if(j<2)printf("|");
        }
        printf("\n");
        if(i<2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin(char player){
    for(i=0;i<3;i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
            return 1;
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
            return 1;
    }
    if (board[0][0]==player && board[1][1]==player && board[2][2]==player)
        return 1;
    if (board[0][2]==player && board[1][1]==player && board[2][0]==player)
        return 1;
    return 0;
}

int isBoardFull(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(board[i][j]==' '){
                return 0;
            }
        }
    }
    return 1;
}

void playerMove(){
    int row,col;
    printf("Enter row and column (0-2) for X: ");
    scanf("%d %d", &row, &col);
    while (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
        printf("Invalid move! Try again: ");
        scanf("%d %d", &row, &col);
    }
    board[row][col] = 'X';
}

void computerMove(){
    int row,col;
    do{
        row=rand()%3;
        col=rand()%3;
    } while(board[row][col] != ' ');
    board[row][col] = 'O';
}

int main(){
    int gameOver=0;
    initializeBoard();
    printBoard();

    while(!gameOver){
        printf("Computer's turn (O):\n");
        computerMove();
        printBoard();
        if(checkWin('O')){
            printf("Computer wins!\n");
            gameOver=1;
            break;
        }
        if(isBoardFull()){
            printf("It's a draw!\n");
            gameOver=1;
            break;
        }

        printf("Player's turn (X):\n");
        playerMove();
        printBoard();
        if(checkWin('X')){
            printf("Player wins!\n");
            gameOver=1;
            break;
        }
        if(isBoardFull()){
            printf("It's a draw!\n");
            gameOver=1;
            break;
        }
    }

    return 0;
}
