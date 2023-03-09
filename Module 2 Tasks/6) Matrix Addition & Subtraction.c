#include <stdio.h>

int main()
{
    int row,column;
    printf("Enter the row size of the matrix\n");
    scanf("%d",&row);
    
    printf("\nEnter the column size of the matrix\n");
    scanf("%d",&column);
    
    int m1[row][column],m2[row][column];
    
    
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("\nEnter the values in the position[%d][%d] of the first matrix\n",i,j);
           scanf("%d",&m1[i][j]);
       }
    }
    
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("\nEnter the values in the position[%d][%d] of the second matrix \n",i,j);
           scanf("%d",&m2[i][j]);
       }
    }
    
    printf("\nMatrix 1\n");
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("%d\t",m1[i][j]);
       }
       printf("\n");
    }

    printf("\nMatrix 2\n");
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("%d\t",m2[i][j]);
       }
       printf("\n");
    }
    
    printf("\nMatrix Addition\n");
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("%d\t",m1[i][j]+m2[i][j]);
       }
       printf("\n");
    }
    
    printf("\nMatrix Subtraction\n");
    for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf("%d\t",m1[i][j]-m2[i][j]);
       }
       printf("\n");
    }
    

    return 0;
}
