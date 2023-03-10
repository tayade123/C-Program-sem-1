/*
  write a program to print filbonaci series recurison.
  1 1 2 3 5 8 13...
*/
#include<stdio.h>
#include<stdlib.h>
void fibonaci (int n);
int main()
{
   int i,n,next , pre ,curr;
   printf("\n enter term : ");
   scanf("%d",&n);
   for ( i = 1; i < n; i++)
       printf("\t %d ",fibo);

       printf("\n");

}

void fibonaci
{

   int   i,n,next , pre ,curr;
  pre = 0;
  curr = 1;
  next = pre = curr;
  printf("\t %d ",next);

   i = 0 ;
   while (i <= n)
   {
       printf("\t %d",next);
       pre = curr;
       curr = next;
       next = pre = curr ;
       i++;
   }
   
  printf("\n");

   
}