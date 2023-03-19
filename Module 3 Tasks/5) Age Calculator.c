#include <stdio.h>
int dayCount(int, int);
int checkLeapYear(int);
int main()
{
    int birthday[3], today[3];
    int year, month, day;
    printf("Enter your birth date in DD format\n");
    scanf("%d",&birthday[0]);
    printf("Enter your birth month in MM format\n");
    scanf("%d",&birthday[1]);
    printf("Enter your birth year in YYYY format\n");
    scanf("%d",&birthday[2]);
    printf("Enter current date in DD format\n");
    scanf("%d",&today[0]);
    printf("Enter current month in MM format\n");
    scanf("%d",&today[1]);
    printf("Enter current year in YYYY format\n");
    scanf("%d",&today[2]);
    
    year = today[2]-birthday[2]-1;
    
    if(today[0]>=birthday[0])
    {
        month=(12+today[1])-birthday[1];
        day=today[0]-birthday[0];
    }
    else
    {
         month=(12+today[1])-birthday[1]-1;
         int previousMonth;
         
         if(today[1]==1)//when current month is january
         {
            previousMonth=12;
         }
         else
         {
            previousMonth = today[1]-1;
         }
         
         int currentYear = today[2];
         
         day=(dayCount(previousMonth, currentYear)-birthday[0]) + today[0];
    }
    
    if(month==12){
        month=0;
        year++;
    }
    
    printf("\nYour age is %d years %d months %d days",year, month, day);
}

int dayCount(int month, int year)
{
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month==2 && checkLeapYear(year))
    
    {
        return 29;
    }
    else
    {
        return days[month-1];
    }
}

int checkLeapYear(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        return 1;
    }
    return 0;
}