#include<stdio.h>
void putValue(int [3][3],char [3][3], int , int );
char symbol(int);
void printTictactoe(char [3][3]);
int verticalCheck(char [3][3],int);
int horizontalCheck(char [3][3],int);
int diagonalCheck(char [3][3],int);
int checkPosition(int [],int);
void main()
{
    int displayTictactoe[3][3],valueCount=1,enteredCount=0;
    char originalTictactoe[3][3];
    int enteredPositions[9];
    int player,value,end=1;
    printf("\nEnter any one of the value mentioned in the below table to put your symbol in that position\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            displayTictactoe[i][j]=valueCount;
            originalTictactoe[i][j]='-';
            printf("%d\t",displayTictactoe[i][j]);
            valueCount++;
        }
        printf("\n");
    }
    printf("\n");

    for(int k=0;k<9;k++)
    {
        printTictactoe(originalTictactoe);
        player=k%2;
        printf("\nEnter the position you want to put (Player %d)\n",player+1);
        scanf("%d",&value);
        printf("\n");
        if(checkPosition(enteredPositions,value))
        {
            enteredPositions[enteredCount]=value;
            enteredCount++;
        }
        else
        {
            k--;
            continue;
        }
        putValue(displayTictactoe,originalTictactoe,value,player);
        if(horizontalCheck(originalTictactoe,player)||verticalCheck(originalTictactoe,player)||diagonalCheck(originalTictactoe,player))
        {
            printTictactoe(originalTictactoe);
            printf("\n\nPlayer %d won",player+1);
            end=0;
            break;
        }
    }
    
    if(end)
    {
        printf("\nGame ended in a draw");
    }
    
}
void printTictactoe(char originalTictactoe[3][3])
{
    printf("\nThe current position is\n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%c\t",originalTictactoe[i][j]);
            }
            printf("\n");
        }
}

void putValue(int displayTictactoe[3][3],char originalTictactoe[3][3], int value, int player)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(displayTictactoe[i][j]==value)
            {
                originalTictactoe[i][j]=symbol(player);
            }
        }
    }
}

int horizontalCheck(char originalTictactoe[3][3],int player)
{
    char check = symbol(player);
    for(int i=0;i<3;i++)
    {
        int flag=0;
        for(int j=0;j<3;j++)
        {
            if(originalTictactoe[i][j]==check)
            {
                flag++;
            }
            if(flag==3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int verticalCheck(char originalTictactoe[3][3],int player)
{
    char check = symbol(player);
    for(int j=0;j<3;j++)
    {
        int flag=0;
        for(int i=0;i<3;i++)
        {
            if(originalTictactoe[i][j]==check)
            {
                flag++;
            }
            if(flag==3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int diagonalCheck(char originalTictactoe[3][3],int player)
{
    int flag=0;
    char check = symbol(player);
    for(int i=0;i<3;i++)
    {
        if(originalTictactoe[i][i]==check)
        {
            flag++;
        }
        if(flag==3)
        {
            return 1;
        }
    }
    flag=0;
    for(int i=0,j=2;i<3,j>=0;i++,j--)
    {
        if(originalTictactoe[i][j]==check)
        {
            flag++;
        }
        if(flag==3)
        {
            return 1;
        }
    }
    return 0;
}

char symbol(int player)
{
    return player?'x':'o';
}

int checkPosition(int enteredPositions[],int value)
{
    int available=1;
    if(value>9)
    {
        printf("\nYou have entered a position that doesn't exist in the matrix, please fill again properly\n");
        available=0;
    }
    else
    {
        for(int i=0;i<9;i++)
        {
            if(enteredPositions[i]==value)
            {
                printf("\nYou have entered in a position that has already been filled, please fill again properly\n");
                available=0;
                break;
            }
        }
    }
    return available;
}
