// Armstrong number 

#include<iostream>
using namespace std;
int main()
{
 int no,r,sum=0,temp;
 
 cout<<"enter the number: ";
 cin>>no;

 temp=no;

 while(temp!=0)
 {
   r=temp%10;
   sum= sum+(r*r*r);
   temp/=10;
 }
  if(no==sum)
  cout<<"The number  "<<no<<" is armstrong  "<<endl;
 else
  cout<<"The number  "<<no<<" is  not armstrong  "<<endl;
  
return 0;
}
