#include <stdio.h>
int main() {
    int row, col;

    printf("Enter no. of rows: ");
    scanf("%d", &row);

    printf("Enter no. of column: ");
    scanf("%d", &col);

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++){
            if(i == 1 || i == row || j == 1 || j == col ){
                printf("*");
            }
            else {
                printf (" ");
            }
        }
        printf("\n");
    }
    return 0;
}