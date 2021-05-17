/******************************************************************************

                            Detect whether the given input arithmatic
                            expression is properly
                            parenthesized or not

                            (-b<a+b) properly parenthesized
                            (a+b) properly parenthesized
                            1+2 not parenthesized
                            (1+2) properly parenthesized
                            ((2) invalid expression
                            (<>) invalid expression
                            (A+B)

0 1 2 3 4 5
( a + b )
97-123 Lower case ASCII value
*******************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,l,t=0;
    char input[20];
    printf(" Enter the input: ");
    scanf("%s", &input);
    l = strlen(input);
    for(i=0; i<l; i++){
        if(input[i] == '(')
        t++;
        else if(input[i] == ')')
        t--;
        else if (input[i] == '*' || input[i] == '+' || input[i] == '-' || input[i] == '/')
        {

           if(input[i-1]>62 && input[i-1]<123 && input[i+1]>62 && input[i+1]<123)
        {

        }
           else
           break;
        }
    }
    if(i==1 && t==0)
    printf("valid");
    else
    printf("Invalid");


}

