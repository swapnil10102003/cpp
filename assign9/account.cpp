/*
  Write a C++ program to create a file which has information Name, Account number. Balance and perform following operations:

  a. Add new record
  b. Display content of file
  c. Display name of person having balance > 10.000
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Record 
{
    string name;
    int accountNumber;
    float balance;
};

void addRecord(ofstream &file) 
{
    Record record;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, record.name);
    cout << "Enter account number: ";
    cin >> record.accountNumber;
    cout << "Enter balance: ";
    cin >> record.balance;
    
    file << record.name << "|" << record.accountNumber << "|" << record.balance << endl;
    
    cout << "Record added successfully." << endl;
}

void displayContent(ifstream &file) 
{
    Record record;
    cout << "\nFile Contents:" << endl;
    while (getline(file, record.name, '|')) 
    {
        file >> record.accountNumber;
        file.ignore();
        file >> record.balance;
        file.ignore();
        
        cout << "Name: " << record.name << endl;
        cout << "Account Number: " << record.accountNumber << endl;
        cout << "Balance: " << record.balance << endl;
        cout << "----------------" << endl;
    }
}

void displayBalanceGreaterThan10000(ifstream &file) 
{
    Record record;
    cout << "\nNames with balance greater than 10,000:" << endl;
    while (getline(file, record.name, '|')) 
    {
        file >> record.accountNumber;
        file.ignore();
        file >> record.balance;
        file.ignore();
        
        if (record.balance > 10000) 
        {
            cout << record.name << endl;
        }
    }
}

int main() {
    char choice;
    ofstream outFile;
    ifstream inFile;
    
    outFile.open("records.txt", ios::app);
    inFile.open("records.txt");
    
    if (outFile.fail() || inFile.fail()) 
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    
    do {
        cout << "\nMenu:" << endl;
        cout << "a. Add new Record" << endl;
        cout << "b. Display Content of File" << endl;
        cout << "c. Display names with balance > 10,000" << endl;
        cout << "d. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 'a':
                addRecord(outFile);
                break;
            case 'b':
                displayContent(inFile);
                break;
            case 'c':
                displayBalanceGreaterThan10000(inFile);
                break;
            case 'd':
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'd');
    
    outFile.close();
    inFile.close();
    
    return 0;
}
