#include <stdio.h>  
int main()  
{  
    int age;   
    printf("Enter your age?");  
    scanf("%d",&age);   
    if(age > 65 && age <= 150)  
    {  
        printf("senior years ! grade D ...");   
    }  
    else if (age > 45 && age <= 64)   
    {  
        printf("middle adulthood !grade c  ...");  
    }  
    else if (age > 17 && age <= 44)   
    {  
        printf("early adultjood !grade B ...");  
    }  
    else if (age > 10 && age <= 16)   
    {  
        printf(" childhood ! grade A ...");   
    }  
    
}  