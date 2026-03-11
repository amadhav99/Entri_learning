#include <stdio.h>
void main(){
    int nRows;
    printf("Enter the number of rows to be printed:");
    scanf("%d",&nRows);
    for(int outerLoop = 1; outerLoop < nRows; outerLoop ++)
    {
        for(int space = 1; space < nRows-outerLoop; space ++)
            printf(" ");
        for(int star = 1; star <= 2*outerLoop-1; star++)
            printf("*");
        printf("\n");
    }
}
