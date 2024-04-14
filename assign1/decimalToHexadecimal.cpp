#include<iostream>
using namespace std;
//convert decimal to hexadecimal
void convert(int num) {
   char arr[100];
   int i = 0, rem;
   while(num!=0) {
      
      rem = num % 16;
      if(rem < 10) {
         arr[i] = rem + 48; // because ascii value of number starts from 48
         i++;
      } else {
         arr[i] = rem + 55; // because ascii value of alphabets starts from 55
         i++;
      }
      num = num/16;
   }
   for(int j=i-1; j>=0; j--)
   cout << arr[j];
}
int main() {
   int num ;
   cout<<"enter the number"<<endl;
   cin>>num;

   cout<<endl<<num<< " converted to hexadeciaml: ";
   convert(num);
   return 0;
}