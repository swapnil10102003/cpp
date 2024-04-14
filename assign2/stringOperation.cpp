/*
 Define class string to perform different operations:
 a.To find length of string.
 b.To concatenate two strings. 
 c. To reverse the string.
 d.To compare two strings.

*/
#include <string>
#include <iostream>
#include <algorithm> // contain reverse function for string.
using namespace std;

class String{
 

  public: // concatente 2 strings
         string concatenate(string str, string str1)
         {
            
            return str + " " + str1;
         }
         // append a string to end.
         string append_str(string str, string str1)
         {

          return str.append(str1);
         }

         int lengthOfString(string str)
         {
           
            return str.length();
         }

         string reverseString(string str)
         {
            reverse(str.begin(), str.end()); //  predefind function to reverse string.
            return str;
         }
  
};

int main()
{
  string str, str1 ;
  String st;
  cout << "ente any string :"<< endl;
  getline(cin, str); // to get string from user.

  cout <<"The entered string is: "+ str << endl<<endl;

  cout << "enter the 2nd string :"<< endl;
  getline(cin, str1); // to get 2nd string from user.
  cout <<"The entered string is: "+ str << endl<<endl;

  cout << "strings after concatenation :" + st.concatenate(str,str1) << endl;

  cout << "strings after append: " + st.append_str(str,str1) << endl;

  cout << "The length of the 1st string is:" << st.lengthOfString(str) <<endl;

  cout << "The reverse string is : " << st.reverseString(str) << endl;

  return 0;
}