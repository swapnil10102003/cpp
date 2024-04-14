/*
 Create a class called LIST with two pure virtual function store() and retrieve(). To store a value call store and to retrieve call retrieves function. Derive two classes stack and queue from it and orverride store and retrieve.
*/
#include<iostream>
using namespace std;

class List
{
  public:
   virtual void store() = 0;
   virtual void retrieve() = 0;
};

class Stack
{
  private: 
   int stack[100];
   int top;

  public:
   Stack()
   {
     top = -1;
   }

   void store(int num) 
   {
    if(top > 99)
    {
      cout << "Stack overflow " << endl;
      return;
    }
    stack[++top] = num;
   }

   int retrieve() 
   {
    if( top < 0)
    {
      cout << "Stack underflow " << endl;
      return;
    }
     return stack[top--];
   }

};

class Queue
{
  private: 
   int queue[100];
   int front;
   int rear;

  public:
   Queue()
   {
    front = rear = -1;
   }

   void store(int num) 
   {
     if( rear >= 99)
     {
       cout << "Queue overflow: " << endl;
       return;
     }

     if(front == -1)
     {
      front = 0;
     }
     queue[++rear] = num;
   }

   int retrieve() 
   {
    if(front == -1 || front > rear)
    {
      cout << "Queue underflow " << endl;
      return;
    }
    return queue[front++];
   }
};

int main()
{
 Stack s;
 Queue q;

 int ch;

 while(true)
 {
  cout << "\n1.ADD to stack" << endl;
  cout  << "2.Delete from stack" << endl;
  cout << "3.Add to queue" << endl;
  cout << "4.Delete from queue" << endl;
  cout << "5.Exit" << endl;
  cout << "\n Enter your choice :";
  cin >> ch;

  switch(ch)
  {
    case 1: { int num;
              cout << "Enter the no to add in stack: ";
              cin >> num;
              s.store(num);
              break;
            }

    case 2: { int del = s.retrieve();
              cout << "Deleted element from stack: " << del << endl;
              break;
            }
          
    case 3: { int num;
              cout << "Enter the no to add in queue: ";
              cin >> num;
              q.store(num);
              break; 
            }

    case 4: { int del = q.retrieve();
              cout << "Deleted element from queue: " << del << endl;
              break;
            }

    case 5: exit(0);
             break;

    default: cout << "Select correct option...." << endl;
  }

 }

  return 0;
}