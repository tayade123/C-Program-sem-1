#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str [][12]={"raj","jagdish","divyesh"};
   
   printf("\n values of strcmp (%s,%s)=%d",str[0],str[1],strcmp(str[0],str[1]));

   if(strcmp (str[0]),str[1]==0)
{
   printf("\n both string are equal");
}
   else
{
   printf("\n not equal ");
}
   printf("\n");

    return 0;

}