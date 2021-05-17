#include <iostream>
#include <string.h>

using namespace std;
char reg[20], text[20];

int main()
{
    int i, rlen, tlen, f = 0;
    char ans;

    do {

            cout<<"\nEnter the Regular Expression\n";
            cin>>reg;

            for (rlen = 0; reg[rlen] != '\0';rlen++);

            cout<<"\nEnter the text\n";
            cin>>text;


            for (tlen = 0;text[tlen] != '\0' ; tlen++);
            if (reg[0] == '*')
            {

                cout<<"\nInvalid regular expression";
            }

            if ((reg[0] >= 65 && reg[0] <= 90) || (reg[0] >= 97 && reg[0] <=122))
            {
                if (reg[0] == text [0])
                {
                   if(reg[1]=='.')

                        {
                            cout<<"print";

                        if(reg[2]=='*')
                            if (tlen != 1)
                            {
                                cout<<"print6";
                                if (reg[3] == text[tlen-1])
                                {
                                    cout<<"\nThe Text Matches The Regular Expression";
                                }
                                else
                                {
                                     cout<<"The Text Doesn't match the Regular Expression";;
                                }
                            }
                            else
                            {
                                 cout<<"The Text Doesn't match the Regular Expression";;
                            }

                            if(reg[2]=='+')
                                {
                            if (text[1] != reg[3])
                            {
                                cout<<"print2";
                                if (reg[3] == text[tlen - 1])
                                {
                                    cout<<"The Text Matches The Regular Expression";;
                                }
                                else
                                {
                                     cout<<"The Text Doesn't match the Regular Expression";;
                                }
                            }

                            }

                        if(reg[2]=='*'){
                            if (reg[rlen-1] == text[tlen-1])
                            {
                                for (i = 0;i <= tlen-2;i++)
                                {
                                    cout<<"print5";
                                    if(text[i] == reg[0])
                                    {
                                        f = 1;
                                        cout<<"print3";
                                    }
                                    else
                                    {
                                        f = 0;
                                        cout<<"print4";
                                    }
                                }
                                if ( f == 1)
                                {
                                    cout<<"The Text Matches The Regular Expression";;
                                }
                                else
                                {
                                     cout<<"\nThe Text Doesn't match the Regular Expression";
                                }
                            }
                            else
                            {
                                 cout<<"The Text Doesn't match the Regular Expression";;
                            }
                        }
                    if(reg[2]=='+')
                        if (tlen <= 2)
                        {
                             cout<<"The Text Doesn't match the Regular Expression";;
                        }
                        else if (reg[rlen-1] == text[tlen-1])
                        {
                            for (i = 0;i < tlen-2;i++)
                            {
                                if (text[i] == reg[0])
                                {
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                }
                            }

                            if (f == 1)
                            {
                                cout<<"The Text Matches The Regular Expression";;
                            }
                            else
                            {
                                 cout<<"The Text Doesn't match the Regular Expression";;
                            }
                        }
                        cout<<"print 7";
                }
            }
            else
                cout<<"Does not match";
        }
        else
            cout<<"Not Implemented";
        cout<<"Y to Continue";
        cin>>ans;
    } while (ans == 'Y' || ans == 'y');
}



