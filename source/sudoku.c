#include <stdio.h>
#include <stdlib.h>
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

/* This function return 0 if a line or a column doesn't contains one occurence of each number from 1 to 9 else it returns 1.
   In order to select a column or a line use the parameter direction (0 for Lines, 1 for Colummns) and the parameter i as the index 
   in the grid.
*/
int checkLinesColumns(int i, int direction){
    int numbers[9];
    int k;
    int checkNumbers = 1;
    int j=0;
    //All numbers members are set to 0
    for(int e=0;e<9;e++) numbers[e]=0;
    switch(direction){
        case 0 :
            //Lines
            for( k = 0; k< N ; k++){
                numbers[grid[i][k]-1]++;
            }
            
            break;
        case 1 : 
            //Columns
            for(k = 0; k< N ;k ++){
                numbers[grid[k][i]-1]++;
            }
            break;
        
        default :
        //Wrong input for direction
            printf("Illegal input for direction 0 for Lines 1 for Columns\nExecution terminated");
            exit(1);
        break;

    }
    //This loop check if each occurence of each number from 1 to nine has been recognised in the array numbers.
    while(checkNumbers && j < N){

        printf("j : %d = %d\n",j,numbers[j]);

        if(numbers[j]!=1){
            checkNumbers=0;
        }
        j++;
    }


    return checkNumbers;

    

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
    
    /* Un comment to test checkLinesColumns function
    printf("Is the Line/Column good ? : %d",checkLinesColumns(0,1));
    */
    //TODO
    //TOFINISH

    return 0;
}