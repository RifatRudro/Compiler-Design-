#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char idt[10];
    int n=strlen(idt);
    bool check1=true,check2=true;

    cout<<"Enter an identifier : ";
    cin>>idt;

    for(int i=0;i<n;i++)
    {
        if(isalpha(idt[n-n])|| idt[n-n]=='_')
        {
            check1=false;
        }
        if(idt[n-n+i]=='!' || idt[n-n+i]=='@' || idt[n-n+i]=='#' ||idt[n-n+i]=='%'
           || idt[n-n+i]=='^' || idt[n-n+i]=='&' ||idt[n-n+i]=='(' || idt[n-n+i]==')'
           || idt[n-n+i]=='-' || idt[n-n+i]=='=')
        {
            check2=false;
        }
    }

    if(check1==false && check2==true)
    {
        cout<<"This is an identifier "<<endl;
    }

    else if(check1==true || check2==false)
    {

            cout<<"This is not identifier "<<endl;
    }
}
