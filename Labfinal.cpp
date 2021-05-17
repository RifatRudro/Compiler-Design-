#include <iostream>
#include<fstream>
using namespace std;


void WriteFile()
{
    ofstream file;
    double marks;
    int n;
    string name;
     file.open("Test.txt",ios::out|ios::app);
     cout<<"A text file Created "<<endl;

 cout<<"How many students You need to store Information: ";
 cin>>n;

 for(int i=0;i<n;i++)
 {
     cout<<"Enter name : ";
     cin.ignore();
     getline(cin,name);
     cout<<"Enter marks :";
     cin>>marks;
     file<<"Name : "<<name<<" "<<"Marks : "<<marks<<endl;
 }
 cout<<"Information saved successfully "<<endl;
    file.close();

}


void ReadFile()
{
    ifstream file_read("Test.txt");
    string line;

    cout<<"   Reading from file data   "<<endl;
    int i=0;
    while(getline(file_read,line))
    {
    cout<<line<<endl;

    }
    file_read.close();
}


int main()
{

    WriteFile();
    ReadFile();
}

