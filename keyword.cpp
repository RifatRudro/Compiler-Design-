#include<iostream>
#include<cstring>

int main()
{
    char keyword[32][10]={"auto","double","int","struct","break","else","long",
                           "switch","case","enum","register","typedef","char",
                            "extern","return","union","const","float","short",
                            "unsigned","continue","for","sign","void","default",
                            "goto","sizeof","voltile","do","if","static","while"};

     char str[20];
     //cout<<"Enter a string";
     cin>>str[];
     int flag=0,i;
     for(i=0; i<32; i++)
     {
         if(strcmp(str, keyword[i])==0){
            flag=1;
         }
     }
     if(flag==1)
        cout<<str<< "is a keyword";
     else
          cout<<str<< "is not a keyword";
     return 0;
}

