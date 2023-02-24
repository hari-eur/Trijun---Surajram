/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark,quit;
    while(1){
        printf("Enter the mark\n");
        scanf("%d",&mark);
        if(mark>=100){
            printf("\nGrade not assigned");
        }
        else if(mark<100 && mark>=90)
        {
            printf("\nGrade A");
        }
        else if(mark<90 && mark>=80)
        {
            printf("\nGrade B");
        }
        else if(mark<80 && mark>=70)
        {
            printf("\nGrade C");
        }
        else if(mark<70 && mark>=60)
        {
            printf("\nGrade D");
        }
        else if(mark<60 && mark>=50)
        {
            printf("\nGrade E");
        }
        else
        {
            printf("\nFail");
        }
        printf("\nDo you want to grade marks again?(1/0)\n");
        scanf("%d",&quit);
        if(!quit){
            printf("\nHave a nice day :)");
            break;
        }
    }
    
    return 0;
}
