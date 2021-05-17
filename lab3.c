#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top= -1;
char stack[100];
void push(char);
void pop();
void find_top();

void main()
{
    int i;
    char a[100];
    printf("Enter expression\n");
    scanf("%s", &a);
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] =='(' || a[i]=='{')
        {
            push(a[i]);
        }
        else if(a[i]==')'|| a[i]=='}')
        {
            pop();
        }
    }
    find_top();
}
    void push(char a)
    {
    top++;
    stack[top]=a;
    }
    void pop()
    {
        if (top== -1)
        {
            printf("Expression is invalid");
            exit(0);
        }
        else
        {
            top--;
        }
    }
    void find_top()
    {
        if(top== -1)
            printf("\nExpression is valid");
        else
            printf("\nExpression is invalid");
    }

