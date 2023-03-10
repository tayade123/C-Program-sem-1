#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char aname[3],bname[30];
  int o,g,h,xyz,van,i,age,reting,j,ang,r,s,t,u,v,z,ans;

  printf("\t welcome to TAYADE BROWSER \n");

  printf(" \n ");

  printf("\t Search : ");
  scanf("%s",bname);
  printf(" \n ");

  printf("\t loding.............\n");
  printf(" \n ");
  printf("\t   _ _ _ WELCOME _ _ _  \n");
  printf(" \n ");
  printf("\t  Hello May I Help \n");
  printf("\n ");
  printf("\t __*__*__ BANK OF TAYADE __*__*__ \n");
  printf("\t \n");

  printf("\t           B              \n");
  printf("\t           A              \n");
  printf("\t           N              \n");
  printf("\t           K              \n");
  printf("\t   \n");
  printf("\t           O              \n");
  printf("\t           F              \n");
  printf("\t  \n");
  printf("\t           T              \n");
  printf("\t           A              \n");
  printf("\t           Y              \n");
  printf("\t           A              \n");
  printf("\t           D              \n");
  printf("\t           E              \n");
  printf("\t \n ");

  printf("\t   1. REGISTER  \n");
  printf(" \n ");
  printf("\t   2. LOGIN \n");
  printf(" \n ");
  printf("\t  Enter Chose Number  : ");
      scanf("%d",&ang);
      printf("\n");
  if ( ang == 1)
  {
      printf("\t  Enter Your Account Number : ");
      scanf("%d",&r);
      printf(" \n ");

      printf("\t  Enter Your Debit Card Number :");
      scanf("%d",&s);
      printf(" \n ");    
      printf("\t  Account Register Mobile No Send OTP \n");
      printf(" \n ");
      printf("\t  Enter Your OTP Number :");
     scanf("%d",&t);
  }
  else
  {
      printf("\t  Enter Your Mobile Number :");
       scanf("%d",&u);
       printf(" \n ");
     printf("\t  SEND OTP YOUR MOBILE NUMBER \n");
  printf(" \n ");
     printf("\t  Enter Your OTP Number :");
     scanf("%d",&v);
  }
    
    printf("\n");
  printf("\t  Loan Chek The Total Amount\n");
  //printf("\t  enter the mobile no : ");
  //scanf("%s",&age);
  //printf("\t  enter the otp :");
 //scanf("%d",&o);
  printf(" \n ");
  printf("\t  Down payment : ");
  scanf("%d",&z);
  printf("\n");
  printf("\t  Amout loan :");
  scanf("%d",&g);
  printf(" \n ");
  
  printf("\t  Amount rate : ");
  scanf("%d",&h);
  printf(" \n ");
  
  printf("\t  Mounth : ");
  scanf("%d",&i);
  printf(" \n ");
  
   xyz =   g * h /100 * i /12 * i * i + z ;
   van =    g * h /100 * i / 12 * i * i  ;
   ans=    g * h /100 * i / 12 * i ; 
   printf("\t  Total EMI Par Month : %d \n",ans);
  // van =    g * h * i / 100 / 12 ;
  printf(" \n ");
 
  printf("\t  Total Amount Of EMI : %d \n",van);
  printf(" \n");

  printf("\t  Total values Of Thing : %d \n ",xyz);
  printf("\n");
  printf("\t  Enter your reting : ");
      scanf("%d",&reting);
printf("\n");
  if (reting>=3)
        {
            printf("\t  THENKS FOR RETING \n");
  printf(" \n ");

            printf("\t  THENKS FOR MOST RETING \n ");
  printf(" \n ");

            printf("\t  *****crogchulestion*****\n");
            
        }
        
        else
        {
            printf("\t  THENKS FOR RETING \n");
  printf(" \n ");

            printf("\t  SORRY FOR INCONVNIENCE \n");
  printf(" \n ");

            printf("\t  No Problem \n");
            
               
        }

  printf(" \n");

   return 0;
    
}