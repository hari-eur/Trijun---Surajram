#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read();
void addParagraph();
void randomAccess();
void main()
{
    FILE *fp = fopen("mydetails","w+");
    char address[50],phone[10],food[50];
    int choice;
    printf("Enter your address\n");
    fscanf(stdin," %[^\n]s",address);
    fputs("Address\n",fp);
    fputs(address,fp);
    fputs("\nPhone Number\n",fp);
    printf("Enter your phone number\n");
    fscanf(stdin," %[^\n]s",phone);
    fputs(phone,fp);
    fputs("\nFood Preferences\n",fp);
    printf("Do you have any food preferences?(1/0)");
    scanf("%d",&choice);
    if(choice)
    {
        int n;
        fprintf(fp,"My favorite food item list\n");
        printf("How many food preferences do you have?");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("Enter your fav food item %d\n",i+1);
            fscanf(stdin," %[^\n]s",food);
            fprintf(fp,"%d)%s\n",i+1,food);
        }
        fputs("\n",fp);
    }
    else
    {
        fputs("I don't have any food preferences\n",fp);
    }
    printf("\n\nDisplaying the file content\n\n");
    fclose(fp);
    read();
    printf("\n\nWrite a paragraph about an incident that happened to you recently, you can exit by typing 'quit' and pressing the enter key\n\n");
    addParagraph();
    printf("\n\nFinding ranodm words from the paragraph\n\n");
    randomAccess();
    
}
void read()
{
    char line[100];
    FILE *fp = fopen("mydetails","r");
    if(fp==NULL)
    {
        printf("File missing\n");
    }
    else
    {
        while(fgets(line,100,fp)!=NULL)
        {
            fputs(line,stdout);
        }
    }
    fclose(fp);
}
void addParagraph()
{
    char line[100];
    FILE *fp = fopen("mydetails","a");
    if(fp==NULL)
    {
        printf("File missing\n");
    }
    else
    {
        fputs("\n My recent Incident\n",fp);
        while(1)
        {
            fgets(line,100,stdin);
            if(strcmp(line,"quit\n")==0)
            {
                break;
            }
            else
            {
                fputs(line,fp);
            }
        }
    }
    fclose(fp);
}

void randomAccess()
{
    char line[100];
    
    FILE *fp = fopen("mydetails","a+");
    
    if(fp==NULL)
    {
        printf("File missing\n");
    }
    else
    {
        fseek(fp,-30,SEEK_END);
        while(fgets(line,100,fp)!=NULL)
        {
            fputs(line,stdout);
        }
    }
    fclose(fp);
}