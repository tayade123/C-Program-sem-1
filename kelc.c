#include<stdio.h>
/*sub function is start*/

}
/*sub function is end*/

/*multi function is start*/
int multi()
{
int a,b,c;
printf("Enter which two numbers"); 
printf(" you want to multiplication:\n");
scanf("%d %d",&a,&b);
c=a*b;
return(c);
}
/*multi function is end*/

/*divide function is start*/
int divide()
{
int a,b,c;
printf("Enter which two numbers");
printf(" you want to division:\n");
scanf("%d %d",&a,&b);
c=a/b;
return(c);
}
/*divide function is end*/

/*main function is start*/
void main()
{
int ch,result;
do
{
printf("\n*******main menu******\n");
printf("Enter 1.for sum.\n");
printf("Enter 2.for subtraction.\n");
printf("Enter 3.for multiplication.\n");
printf("Enter 4.for division.\n");
printf("Enter 5.for exit program.\n");
printf("choose any menu.\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
result=min();
printf("Subtraction of entered two");
printf(" numbers:%d\n",result);
break;
case 2:
result=sub();
printf("Subtraction of entered two");
printf(" numbers:%d\n",result);
break;
case 3:
result=multi();
printf("Multiplication of entered two");
printf(" numbers:%d\n",result);
break;
case 4:
result=divide();
printf("Division of entered two"); 
printf(" numbers:%d\n",result);
break;
        
default:printf("Sorry! invalid number try again.\n");
break;
}
} while (ch!=5);
    
}
/*main function is end*/
