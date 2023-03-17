#include<stdio.h>
#include<string.h>
int main()
{
    int ip;
    printf("Enter the first part of the ip address\n");
    scanf("%d",&ip);
    switch(ip){
        case 1 ... 126:
            printf("\nThe IP address belongs to class A");
            break;
        case 127:
            printf("\nThis IP address is only reserved for loopback and diagnostic functions.");
            break;
        case 128 ... 191:
            printf("\nThe IP address belongs to class B");
            break;
        case 192 ... 223:
            printf("\nThe IP address belongs to class C");
            break;
        case 224 ... 239:
            printf("\nThe IP address belongs to class D");
            break;
        case 240 ... 254:
            printf("\nThe IP address belongs to class E");
            break;
        default:
            printf("\nYou have entered a wrong value");
    }
    
    return 0;
}
