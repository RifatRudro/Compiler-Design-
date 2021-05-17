#include<stdio.h>
int main()
{
   char ch[5];
   int c=1;
   while(c==1)
   {
   printf("Enter An Operator: ");
   gets(ch);


   switch(ch[0])
   {
   case'+':
    if(ch[1]=='+')
    {
        printf("Increment Operator\n");
    }
    else if(ch[1]=='-')
         printf("Not an Operator\n");
    else
        printf("Addition Operator\n");
        break;

    case'-':
    if(ch[1]=='-')
    {
        printf("Decrement Operator\n");
    }
    else if(ch[1]=='+')
         printf("Not an Operator\n");
    else if(ch[1]=='1')
         printf("Not an Operator\n");
    else if(ch[1]=='-')
         printf("Not an Operator\n");
    else
        printf("Subtraction Operator\n");
        break;

   case'<':
    if(ch[1]=='=')
    {
        printf("Less than or equal Operator\n");
    }
    else if(ch[1]=='+')
         printf("Not an Operator\n");
    else if(ch[1]=='-')
         printf("Not an Operator\n");
    else if(ch[1]=='1')
         printf("Not an Operator\n");
    else if(ch[1]=='>')
         printf("Not an Operator\n");

    else
        printf("less than Operator\n");
        break;

    case'>':
    if(ch[1]=='=')
    {
        printf("Grater than or equal Operator\n");
    }
    else if(ch[1]=='+')
         printf("Not an Operator\n");
    else if(ch[1]=='-')
         printf("Not an Operator\n");
    else if(ch[1]=='1')
         printf("Not an Operator\n");
    else
        printf("Grater than Operator\n");
        break;


  case'*':
        printf("Multiplication Operator\n");
        break;

  case'/':
        printf("Devision Operator\n");
        break;

  case'%':
        if(ch[1]=='=')
    {
        printf("logical AND Operator\n");
    }
    else
        printf("Modulus Operator\n");
        break;


  case'&':
      if(ch[1]=='=')
    {
        printf("Modulus AND Operator\n");
    }
    else
        printf("Bitwise AND Operator\n");
        break;

  case'|':
       if(ch[1]=='|')
    {
        printf("logical OR Operator\n");
    }
    else
        printf(" Bitwise OR Operator\n");
        break;

  case'^':
        printf(" Bitwise XOR Operator\n");
        break;

  case'!':
    if(ch[1]=='=')
    {
        printf("Not equal Operator\n");
    }
    else
        printf("logical Not Operator\n");
        break;
  default:
    printf("Not an Operator\n");

   }
   }
}
