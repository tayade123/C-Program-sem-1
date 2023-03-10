#include<stdio.h>
int main()
{
   char str[4][8];//={"jagdish","divyesh","umesh","dipak"};
   int i;
  /* printf("\n this is a friend : %s ",str[0]);
   printf("\n this is a friend : %s ",str[1]);
   printf("\n this is a friend : %s ",str[2]);
   printf("\n this is a friend : %s ",str[3]);
 */

  for ( i = 0; i < 3; i++)
  {
      printf("\nthis is a friend : %d",i+1);
      scanf("%s",str[i]);
  }
  for ( i = 0; i < 3; i++)
  {
    printf("\n hi all friend : %s",str[i]);  
  }
  
    return 0;
}