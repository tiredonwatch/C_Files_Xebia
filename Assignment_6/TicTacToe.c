#include <stdio.h>
#include<stdio.h>
#include<limits.h>

void print_arr(char array[3][3]);
int winner_check(char array[3][3], char player);
int draw_check(char array[3][3]);
void move(char array[3][3], char player);
int valid_move(char array[3][3], int r, int c);


int main() {
    char array[3][3]= { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char newPlayer= 'O';

    printf("Hey Player! Tic Tac Toe!\n\n");

    while (1) {
        printf("Player %c turn:\n", newPlayer);
        move(array, newPlayer);
        print_arr(array);
        if (winner_check(array, newPlayer)) {
            printf("!!!Player %c wins!!!\n", newPlayer);
            break;
        }
        if (draw_check(array)) {
            printf("!!!Draw!!!\n");
            break;
        }
        if (newPlayer == 'O') {
            newPlayer = 'X';
        } else {
            newPlayer = 'O';
        }
    }
    return 0;
}

void print_arr(char array[3][3]) {
    printf("\n");
    for (int i=0;i<3; i++) {
        for (int j=0;j<3;j++) {
            printf(" %c ", array[i][j]);
            if (j<2) printf("|");
        }
        printf("\n");
    }
    printf("\n");
}

int winner_check(char array[3][3], char player) {
    for (int i=0;i<3;i++) {
        if ((array[i][0] == player && array[i][1] == player && array[i][2]== player) || (array[0][i]== player && array[1][i]== player && array[2][i] == player)) { 
            return 1;
        }
    }
    if ((array[0][0]==player && array[1][1]== player && array[2][2] == player) || (array[0][2]== player && array[1][1]== player && array[2][0] == player)){ 
        return 1;
    }
    return 0;
}

int draw_check(char array[3][3]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (array[i][j]==' ') {
                return 0;
            }
        }
    }
    return 1;
}
void move(char array[3][3],char player) {
    int r, c;
    while (1) {
        printf("Enter r(1-3) and c(1-3): ");
        scanf("%d %d", &r, &c);
        r--; 
        c--;

        if (valid_move(array, r, c)) {
            array[r][c] = player;
            break;
        } else {
            printf("Invalid move!Try again.\n");
        }
    }
}

int conditioncheck_move(char array[3][3], int r, int c) {
    return (r>=0&& r<3 && c>=0 && c<3 && array[r][c]==' ');
}