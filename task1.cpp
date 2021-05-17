#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char input[10];
    char op[5]={'+','-','*','/','='};
    char input2;

    bool check=true;
    bool check1=true;
    bool check2=true;

    int count=0;

    cout<<"Enter a statement : ";
    cin>>input;

    for (int i=0; i<strlen(input); i++)
    {

        if(isdigit(input[i])==true)
    {
        count++;
    }
     if(isalpha(input[i-i]) || input[i-i]=='_')
        {
            check1=false;
            cout<<"This is an Identifier"<<endl;
        }
    }

    for(int i=0;i<5;i++)
    {
        if(op[i]==input2)
        {
            cout<<"This is an operator "<<endl;
            check=false;
        }
    }

    if(count==strlen(input))
    {
        cout<<"This is an numerical number";
    }

}
