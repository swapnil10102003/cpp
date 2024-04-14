/*
  Create a base class Account (Acc Holder Name, Acc Holder Contact No). Derive two classes as 
  Saving Account(S_Acc_No., Balance) and Current_Account(C_Acc_No., Balance) from Account. The
  savings account provides interest and withdrawal facility. The current account provides no interest
  facility. Saving account maintains a minimum balance of 2000 and if the balance falls below this level, 
  a service charge of Rs 500 is imposed. Current account maintains a minimum balance of 5000 and if 
  the balance falls below this level, a service charge of Rs 1000 is imposed. Write a C++ menu driven 
  program to perform following functions: Accepting Amount and deposit it into accountWithdrawing amount 
  from account. Calculating Interest and service charge where interest rate for Saving account is 
  10% of balance Displaying information of account.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Account
{
  protected:
    string cname;
    long long int contactNo;
  
  public:
   Account(string cname, long long int contactNo) : cname(cname), contactNo(contactNo)
   {
   }
   ~Account()
   {
   }
 
};

class Saving_Account : public Account
{
  protected:
   long int s_accNo;
   int s_balance;
  
  public:
   Saving_Account(string cname,long long int contactNo,long int s_accNo,int s_balance) : Account(cname,contactNo), s_accNo(s_accNo),s_balance(s_balance)
   {
   }
   ~Saving_Account()
   {
   }

   void addAmount(int amount)
   {
     s_balance += amount;
     cout << "Total balance: " << s_balance << "/-" << endl;

   }

   void withdrawAmount(int amount)
   {
    if((s_balance > amount) && ( s_balance > 2000))
    {
     s_balance -= amount;
     cout << "Remaining balance: " << s_balance << "/-" << endl;
    }
    else
    {
      cout << "Low balance!" << endl;
    }
    
   }

   void totalInterest(double duration)
   {
     int interest = (s_balance * duration * 0.1) / 100;
     cout << "Interest: " << interest << endl;
   }
   void displayBalance()
   {
    cout << "Customer Name: " << cname <<endl;
    cout << "Account Type: " << "SAVING" << endl;
    cout << "Account Number: " << s_accNo << endl;
    cout << "Account balance: " << s_balance << "/-" << endl;
   }

  
};

class Current_Account : public Account
{
  protected:
   long int c_accNo;
   int c_balance;
  
  public:
   Current_Account(string cname,long long int contactNo,long int c_accNo,int c_balance) : Account(cname,contactNo),c_accNo(c_accNo),c_balance(c_balance)
   {
   }
   ~Current_Account()
   {
   }
  
   void addAmount(int amount)
   {
     c_balance += amount;
     cout << "Total balance: " << c_balance << "/-" << endl;

   }

   void withdrawAmount(int amount)
   {
    if((c_balance > amount) && ( c_balance > 5000))
    {
     c_balance -= amount;
     cout << "Remaining balance: " << c_balance << "/-" << endl;
    }
    else
    {
      cout << "Low balance!" << endl;
    }
    
   }

   void displayBalance()
   {
    cout << "Customer Name: " << cname <<endl;
    cout << "Account Type: " << "CURRENT" << endl;
    cout << "Account Number: " << c_accNo << endl;
    cout << "Account balance: " << c_balance << "/-" << endl;
   }
};

int main()
{ Saving_Account  cust1("swapnil",996000,1234567890,1200000);
  Current_Account cust2("swapnil",996000,1234567890,8900000);
  int ch,ch1,ch2;

  do{
     cout << "SELECT ACCOUNT" << endl;
     cout << "1.SAVING ACCOUNT" << endl;
     cout << "2.CURRENT ACCOUNT" << endl;
     cout << "3.CLOSE" << endl;
     cin >> ch;

    switch(ch)
    {
      case 1:
      {
        
        cout << "1.DEPOSIT AMOUNT" << endl;
        cout << "2.WITHDRAW AMOUNT" << endl;
        cout  << "3.DISPLAY BALANCE " << endl;
        cout  << "4.CALCULATE INTERSET " << endl;
        cout << "5.CLOSE " << endl;
        cout << "SELECT OPERATION:";
        cout << endl;
        cin >> ch1;

        switch(ch1)
        {
          case 1:int d_amount;
                 cout << "Enter amount : " << endl;
                 cin >> d_amount;

                 cust1.addAmount(d_amount);
                 cout << "Amount added successfully " << endl;
             
                break;

          case 2:int w_amount; 
                 cout << "Enter amount : " << endl;
                 cin >> w_amount;

                 cust1.withdrawAmount(w_amount);

                 break;
          
          case 3: cust1.displayBalance();
                  break;

          case 4: double duration;
                  cout << "Enter duration: " << endl;
                  cin >> duration;
                  cust1.totalInterest(duration); 
                  break;

          case 5: exit(0); 
                  break;        
        } 
      }
      case 2:
      { 
        do{

        cout << "1.DEPOSIT AMOUNT" << endl;
        cout << "2.WITHDRAW AMOUNT" << endl;
        cout << "3.DISPLAY BALANCE " << endl;
        cout << "4.CLOSE " << endl << endl;
        cout << "SELECT OPERATION:";
        cout << endl;
        cin >> ch2;

        switch(ch2)
        {
          case 1:int d_amount;
                 cout << "Enter amount : " << endl;
                 cin >> d_amount;

                 cust2.addAmount(d_amount);
                 cout << "Amount added successfully " << endl;
             
                break;

          case 2:int w_amount; 
                 cout << "Enter amount : " << endl;
                 cin >> w_amount;

                 cust2.withdrawAmount(w_amount);

                 break;

          case 3: cust2.displayBalance();
                  break;
          
          case 4: exit(0); 
                  break;
        }
        }while(ch2 != 4);
    }
  }
  }while(ch !=3);
  return 0;
}