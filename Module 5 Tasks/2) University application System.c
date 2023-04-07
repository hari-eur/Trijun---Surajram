#include <stdio.h>
#include<string.h>

struct student{
    char name[20];
    char email[20];
    char phone[10];
    int percent;
    char dep[5];
};

typedef struct student student;

struct dep{
    char department[5];
    student details[5];
    int average;
};

typedef struct dep dep;

dep cse;
dep it;

int cse_count=0;
int it_count=0;

void addStudent();
void printStudentNameList(dep studentList);

int main()
{

    int count;
    strcpy(cse.department,"CSE");
    strcpy(it.department,"IT");
    printf("Enter the number of student application\n");
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        addStudent();
    }
    printf("\n");
    printStudentNameList(cse);
    printStudentNameList(it);
    return 0;
}

void addStudent()
{
    student detail;
    printf("Enter student name\n");
    scanf("%s",detail.name);
    printf("Enter student email\n");
    scanf("%s",detail.email);
    printf("Enter student phone number\n");
    scanf("%s",detail.phone);
    printf("Enter student percentage\n");
    scanf("%d",&(detail.percent));
    printf("Enter student dep\n");
    scanf("%s",detail.dep);
    
    if(strcmp(detail.dep,"cse")==0)
    {
        cse.details[cse_count++]=detail;
    }
    else if(strcmp(detail.dep,"it")==0)
    {
        it.details[it_count++]=detail;
    }
    else
    {
        printf("Entered dep is not available\n");
    }
}

void printStudentNameList(dep studentList)
{
    int count, avg=0;
    if(strcmp(studentList.department,"CSE")==0)
    {
        count = cse_count;
    }
    else if(strcmp(studentList.department,"IT")==0)
    {
        count = it_count;
    }
    printf("Displaying Namelist of the department of %s\n",studentList.department);
    for(int i=0;i<count;i++)
    {
        printf("Student Name: %s\n",studentList.details[i].name);
        avg+=studentList.details[i].percent;
    }
    avg/=count;
    printf("\n");
    printf("Average percentage of the department of %s is %d\n\n",studentList.department,avg);
}