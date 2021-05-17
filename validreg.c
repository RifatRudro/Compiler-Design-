#include<stdio.h>
#include<string.h>


char reg[30], text[30];
int main()
{
    int i, rlength, tlength, t=0;
    char exit;

    do
    {
        printf("\nEnter the Regular Expression\n");
        scanf(" %[^\n]s", reg);

        for(rlength=0; reg[rlength]!=0; rlength++)
        {
            printf("Enter the Text: ");
            scanf("%[^\n]s", text);
        }

        for(tlength=0; text[tlength]!=0; tlength++)
            if((reg[0]>=65 && reg[0]<=90) || (reg[0]>=97 && reg[0]<=122))
        {
            if(reg[0]==text[0])
            {
              switch(reg[1])
              {
              case '.':

              switch(reg[2])
              {
              case '*':
                if(tlength!=1)
                {
                    if(reg[3]== text[tlength-1])
                    {
                        printf("Matched");
                    }
                    else
                        printf("Not Matched");
                }
                else
                {
                   printf("Not Matched");
                }
                break;


              case '+':
                  if(text[1]!=reg[3])
                  {
                      if(reg[3]==text[tlength-1])
                      {
                          printf("Matched");
                      }
                      else
                      {
                          printf("Not Matched");
                      }
                  }
                  break;

              case '*':
                if(reg[rlength-1]==text[tlength-1])
                {
                    for(i=0; i<tlength; i++)
                    {
                        if(text[i]==reg[0])
                        {
                            t=1;
                        }
                        else
                        {
                            t=0;
                        }
                    }
                    if(t==1)
                    {
                        printf("Matched");
                    }
                    else
                        printf("Not Matched");
                }
                else
                    printf("not matched");
                break;

              case '+':
                if(tlength<=2)
                {
                    printf("Not Matched");
                }
                else if (reg[rlength-1]==text[tlength-1])
                {
                    for(i=0; i<tlength-2; i++)
                    {
                        if(text[i]==reg[0])
                        {
                            t=1;

                        }
                        else
                            t=0;
                    }
                    if(f==1)
                    {
                        printf("matched");
                    }
                    else
                        printf("not matched");

                }
                break;


              }
            }
            else
                printf("Not Implemented");
        }
        print("If you want to exit then press (yes/no)");
        scanf("%c",&exit);


    } while(exit=='yes' || exit== 'no');
}
