#include<iostream>
using namespace std;

int main()
{
    char op[5]={'+','-','*','/','='};
    char input;
    bool check=true;

    cout<<"Enter string : ";
    cin>>input;

    for(int i=0;i<5;i++)
    {
        if(op[i]==input)
        {
            cout<<"This is an operator "<<endl;
            check=false;
        }
    }

    if(check==true)
    {
        cout<<"This is not an operator "<<endl;
    }
}
