/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct book {
    char name[20];
    char author[20];
    char type[20];
};

typedef struct book bookStruct;
int count=0;

void addBook(bookStruct *);
void showBook(bookStruct *books,int place);
void searchBook(bookStruct *books);

int main()
{
    int choice;
    bookStruct books[20];
    while(1){
        printf("How can we help you \n1)Donate Book\n2)Search Book\n3)Quit\n");
        scanf("%d",&choice);
        if(choice<=2){
            (--choice)?searchBook(books):addBook(books);
        }
        else
        {
            printf("Thank you for coming\n");
            break;
        }
    }
    return 0;
}

void addBook(bookStruct *books)
{
    
    if(count==10)
    {
        printf("Storage full, no books can be added\n");
    }
    else
    {
        books+=count;
        printf("Enter the name of the book\n");
        scanf("%s",books->name);
        printf("Enter the name of the author\n");
        scanf("%s",books->author);
        printf("Enter the name of the type\n");
        scanf("%s",books->type);
        count++;
    }
}

void showBook(bookStruct *books,int place)
{
    
    if(count==0)
    {
        printf("No Books are present\n");
    }
    else
    {
        books+=place;
        printf("The name of the book is %s\n",books->name);
        printf("The author of the book is %s\n",books->author);
        printf("The type of the book is %s\n",books->type);
    }
}

void searchBook(bookStruct *books)
{
    bookStruct *localBooks = books;
    if(count==0)
    {
        printf("No Books are present\n");
    }
    else
    {
        int option;
        char bookName[20];
        char authorName[20];
        char typeName[20];
        printf("Choose one of the options to search by \n1)Book Name\n2)Author Name\n3)Type\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("Enter the name of the book you want to search\n");
                scanf("%s",bookName);
                for(int i=0;i<10;i++)
                {
                    if(strcmp(localBooks->name,bookName)==0)
                    {
                        printf("Book found\n");
                        showBook(books,i);  
                        return;
                    }
                    localBooks++;
                }
                printf("Book not found\n");
                break;
                
            case 2:
                printf("Enter the name of the book you want to search\n");
                scanf("%s",authorName);
                for(int i=0;i<10;i++)
                {
                    if(strcmp(localBooks->author,authorName)==0)
                    {
                        printf("Book found\n");
                        showBook(books,i); 
                        return;
                    }
                    localBooks++;
                }
                printf("Book not found\n");
                break;
                
            case 3:
                printf("Enter the name of the book you want to search\n");
                scanf("%s",typeName);
                for(int i=0;i<10;i++)
                {
                    if(strcmp(localBooks->type,typeName)==0)
                    {
                        printf("Book found\n");
                        showBook(books,i);  
                        return;
                    }
                    localBooks++;
                }
                printf("Book not found\n");
                break;
                
            default:
                printf("Wrong option\n");
        }
    }
}