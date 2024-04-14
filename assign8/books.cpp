/*
 A book (ISBN) and CD (data capacity) are both types of media (id, title) objects. A person buys 10 media items, cach of which can be either book or CD. Display the list of all books and CD's bought. Define the classes and appropriate member functions to accept and display data. Use pointers and concepts of polymorphism (virtual functions).
*/

#include<iostream>
using namespace std;

class Media
{
 protected:
   int id;
   string title;
  
  public:
   virtual void acceptDetails() = 0;
   virtual void displayDetails() = 0;
};

class Book : public Media
{
  private:
   string isbn; // 10 to 13 characters long number

  public:
     void acceptDetails()
   {
     cout << "Enter a book id:" << endl;
     cin >> id;
     cout << "Book title:" << endl;
     cin >> title;
     cout << "Book isbn:" << endl;
     cin >> isbn;

     cout << endl;
   }

    void displayDetails()
   {
    cout << "Book id: " << id << endl;
    cout << "Book title: " << title << endl;
    cout << "Book isbn: " << isbn << endl;
     cout << endl;
   }
};

class CD : public Media
{
 private:
  float capacity;

 public:

  void acceptDetails()
 {
  cout << "Enter CD id" << endl;
  cin >> id;
  cout << "CD title" << endl;
  cin >> title;
  cout << "CD capacity" << endl;
  cin >> capacity;
   cout << endl;
 }

  void displayDetails()
 {
  cout << "CD id:" << id << endl;
  cout << "CD title:" << title << endl;
  cout << "CD capacity:" << capacity << endl;
   cout << endl;
 }
};

int main()
{
  Media *media[10];
 
  // to create both book class and CD class objects.
  for(int i = 0; i < 10; i++)
  {
    if(i % 2 == 0)
    {
      media[i] = new Book();
    }
    else
    {
      media[i] = new CD();
    }

    media[i]->acceptDetails();
  }

  cout << "********************************" << endl;
  cout << "DETAILS: " << endl;

  for (int i = 0; i < 10; i++)
  {
    media[i]->displayDetails();
  }

 // to free memory
  for (int i = 0; i <10; i++)
  {
    delete media[i];
  }
}