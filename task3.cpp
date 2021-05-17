#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char line[50];
    bool check=true;

    cout<<"Enter a statement to check comment or not : ";
    cin>>line;

    for(int i=0;i<strlen(line);i++)
    {
        if(line[0]=='/' && line[1]=='/')
        {
            cout<<"This is comment line"<<endl;
            check=false;
            break;
        }
    }

    if(check==true)
    {
        cout<<"This is not comment line"<<endl;
    }
}
