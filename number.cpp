#include<iostream>
using namespace std;
bool ValidNumber(string str)
{
   for(int i = 0; i < str.length(); i ++)
   {

      if (str[i] < 48 || str[i] > 57)
         return false;
   }

   return true;
}

 int main()
 {
      string str;
      cout <<"Enter a string:";

      cin>>str;
     if(ValidNumber(str)){
        cout<<"This input is numeric constant";}
      else
        cout<<"This input is not numeric constant";

 }
