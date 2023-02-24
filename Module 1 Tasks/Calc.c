/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input1,input2,choice;
    int quit;
    while(1){
        printf("Enter a number\n");
        scanf("%d",&input1);
        
        printf("\nChoose your operation\n");
        
        while(1){
            printf("1:+\n2:-\n3:*\n4:/\n5:%\n6:++\n7:--\n");
            scanf("%d",&choice);
            if(choice<8 && choice>0)
            {
                if(choice<6)
                {
                    printf("\nEnter the second number\n");
                    scanf("%d",&input2);
                }
                break;
            }
            else
            {
                printf("\nPlease choose from one of the operations\n");
            }
        }
        printf("------------Ouput------------\n");
        switch(choice){
            case 1: 
                printf("%d+%d=%d",input1,input2,(input1+input2));
                break;
            case 2: 
                printf("%d-%d=%d",input1,input2,(input1-input2));
                break;
            case 3: 
                printf("%d*%d=%d",input1,input2,(input1*input2));
                break;
            case 4: 
                printf("%d/%d=%d",input1,input2,(input1/input2));
                break;
            case 5: 
                printf("%d/%d=%d",input1,input2,(input1%input2));
                break;
            case 6: 
                printf("%d++=%d",input1,(input1+1));
                break;
            case 7: 
                printf("%d--=%d",input1,(input1-1));
                break;
        }
        
        printf("\nDo you want to use Calc again?(1/0)\n");
        scanf("%d",&quit);
        if(!quit)
        {
            printf("\nThank you for using Calc, Have a nice day :)");
            break;
        }
    }
    return 0;
}
