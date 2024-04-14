/*
 Define class string to perform different operations:
 a.To find length of string.
 b.To concatenate two strings. 
 c. To reverse the string.
 d.To compare two strings.

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class String
{  
   string str1;
   string str2;

  public:
   
   void setDetails(string str1,string str2)
    {
      this->str1 = str1;
      this->str2 = str2;
    }

   void display()
   {
      cout << "the 1st string is: " << this->str1 << endl;
      cout << "the 2nd string is: " << this->str2 << endl;
   }
 
   int length_string(string str)
   {
      return str.length();
   }
  
   string concatenate_string()
    {
       return this->str1 + this->str2;
    }

   void compare_string()
    {
        if(str1 == str2)
       {
         cout << "Both strings are equal" << endl;
       }
      
    }

   string reverse_string(string str)
   { 

     reverse(str.begin(),str.end());
     return str;
   }
  

};

int main()
{
  String st;

  string str1,str2,con;

   cout << "Enter the two strings :" << endl;
   cin >> str1 >> str2;

   st.setDetails(str1,str2);
  
   st.display();

   con = st.concatenate_string();

   cout << "conacatnate string : " << con << endl;

   int len = st.length_string(str1);
    cout << "the length of  string : " << len << endl;

   string rev = st.reverse_string(str1);

cout << "the reversed string is: " << rev << endl;

 return 0;
}
