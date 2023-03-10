#include<stdio.h>
#include<string.h>
int main()
{
  char str[][10]={"jagdish","umesh","dipak"};
  char temp [10]={"temp"};

  printf("\n first string : %s",str[2]);
  printf("\n temp string : %s");

  strcpy(temp,str[0]);

  printf("\n new values of tem : %s ", temp);
  printf("\n");

    return 0;
}