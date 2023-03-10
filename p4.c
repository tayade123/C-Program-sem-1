#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<stdib.h>
int main()
{
   char str[20];
   int i,digit,space,words;
   printf(" PRINT THE ANY STRING : ");
   scanf("%[^\n]",str);

   printf("\n length of string %d \n ",strlen(str));
   digit=space;
   words=digit;

   for ( i = 0; i < strlen(str); i++) 
   {
       if (isdigit(str[i]))
       digit ++;
       
       if (isspace(str[i]))
       space ++;

       if ( iswgraph(str[i]))
       words ++;
      
      
       

   }
    printf("\n NO OF digit : %d ",digit);
    printf("\n NO OF space : %d ",space);
    printf("\n NO OF words : %d ",words);
  
   
    printf("\n");
    return 0;
}