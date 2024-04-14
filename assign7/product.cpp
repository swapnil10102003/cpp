/*
 Design a base class Product (Product Id, Product Name, Price). Derive a class Discount (Discount_In Percentage) from Product. A customer buys n" Products. Calculate total price, total discount and display bill using appropriate manipulator
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product
{
public:
  int p_id;
  string p_name;
  float price;
};

class Discount : private Product
{
  float disPer;

public:
  void setDetails()
  {
    cout << "enter the product id , product name , price and dicount percentage on that product" << endl;
    cin >> p_id >> p_name >> price >> disPer;
  }
  void displayDetails()
  {
    cout << setw(15) << p_id << setw(15) << p_name << setw(15) << price << endl;  
  }
  float totalPrice()
  {
    static float totalPrice;
    totalPrice = totalPrice + price;

    return totalPrice;
  }
  float totalDiscount()
  {
    static float discount;
    float dis = (disPer/ 100) ;
    discount = price * dis ;

    return discount;
  }
  
};

int main()
{
  int n;
  float totalPrice = 0, totalDiscount = 0;
  cout << "How many products?" << endl;
  cin >> n;

  Discount d[n];

  for (int i = 0; i < n; i++)
  {
    d[i].setDetails();
  }
  
  cout << "\n Total products list: " << endl;
  cout << setw(15) << "Product id: " << setw(15) << "Name: " << setw(15) << "Price: " << endl;
  for (int i = 0; i < n; i++)
  {
    d[i].displayDetails();
  }
  
  for (int i = 0; i < n; i++)
  {
    totalPrice = d[i].totalPrice();
  }

  for (int i = 0; i < n; i++)
  {
    totalDiscount = d[i].totalDiscount();
  }
    cout << "_____________________________________"<< endl;
    cout << right;
    cout << setw(15) << "Bill" << endl << endl ;
    cout << left;
    cout << setw(25) << "Total Products:" << n << "N" << endl;
    cout << setw(25) << "Actual Price:" << totalPrice << "/-" << endl;
    cout << setw(25) << "Discount : " << totalDiscount << "/-" << endl << endl;
    cout << setw(25) << "Paybale Amount:" << totalPrice - totalDiscount << "/-"  << endl;
    cout << "_____________________________________"<< endl; 

  // cout << "totalPrice: " << totalPrice << endl;
  // cout << "totalDiscount: " << totalDiscount << endl;
  // cout << "Final total price: " << totalPrice - totalDiscount << endl;

  return 0;
}