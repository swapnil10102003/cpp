/*
 A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author_name, title, price. publisher, and stock position.If customer wants to purchase a book he gives details of book along with the number of copies required. If requested copies are available the total cost of requested copies is displayed; otherwise the message "Required copies not in stock" is displayed. Design a system using a class called Bookshop with suitable member functions and constructor. (Use new operator to allocate memory)
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Bookshop
{
 string *a_name;
 string *title;
 float *price;
 string *publisher;
 int *stock;

 public:
 Bookshop()
 {
  a_name = new string;
  title = new string;
  price = new float;
  publisher = new string;
  stock = new int;
 }

 void setDetails()
 {
   cout << "Enter book title, author of book, price of book, publisher of book and available copies in stock:" << endl;
   cin >> *title >> *a_name >> *price >> *publisher >> *stock;
 }

 void displayDetails()
 {
  static int count = 1;

  cout << "Book details of:" << count << endl;
  cout << left ;
  cout << setw(15) << "Book Title: " << *title << endl;
  cout << setw(15) << "Author Name: " << *a_name << endl;
  cout << setw(15) << "Book Price: " << *price << endl;
  cout << setw(15) << "Book Publisher: " << *publisher << endl;
  cout << setw(15) << "Book Stock: " << *stock << endl;

  count++;
 }

 void getBook(string search_aname, string search_title, int req_copies)
 {
  if((search_aname == *a_name) && (search_title == *title))
  {
    if(req_copies <= *stock)
    {
      cout << "\n\nBook Copies are available. " << endl;
      cout << setw(15) << "Book Price: " << *price << "/-"<< endl;
      cout << setw(15) << "Total amount: " <<(*price * req_copies) << "/-" <<  endl;
    }
    else if(req_copies > *stock)
    {
      cout << "\nRequired book copies not in stock: " << endl;
    }
    else
    {
      cout << "Book  is not available " << endl;
    }
  }
  
 }
};

int main()
{
  int n;
  cout << "Enter the number of books:";
  cin >> n;

  Bookshop book[n];

  for(int i = 0; i < n; i++)
  {
    book[i].setDetails();
  }

  for(int i = 0; i < n; i++)
  {
    book[i].displayDetails();
  }
 
 int choice;
 while(choice != 2)
 {
  
  cout << "1.search book \n2.close \n" << endl;
  cout << "Enter option: ";
  cin >> choice;

  switch(choice)
  {
    case 1: string search_aname, search_title;
            int copies;

            cout << "\nEnter the author name book name and total reqiured copies:" << endl;
            cin >> search_aname >> search_title >> copies;

            
            for(int i = 0; i < n; i++)
              {
                book[i].getBook(search_aname, search_title, copies);
              }
            break;
  }
 }
  return 0;
}