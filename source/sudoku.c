#include <stdio.h>
#include "sudoku.h"

int grid[N][N];
int filling = 0;

int initialize(){
    int i = 0;
    int j = 0;
    
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            grid[i][j] = 0;
        }
    }

    return 0;
}

void display(){
    int i = 0;
    int j = 0;
    
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

int create(int tab[][N]){
    int i;
    int j;

    for(j=0; j<N; ++j){
        for(i=0; i<N; ++i){
            grid[j][i] = (i + j*3 + j/3) %9 + 1;
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int input(){
    //TODO
}

int checkLinesColumns(int i, int direction){
    //TODO
}

int checkRegion(int k, int l){
    //TODO
}

int checkGrid(){
    //TODO
}

int main(){
    printf("hack-fest-2021-sudoku\n");

    initialize();

    filling = create(grid);

    //TODO
    //TOFINISH

    return 0;
}