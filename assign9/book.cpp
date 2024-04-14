/*
 Write a Menu driven Program to maintain book records using file handling. Program should contain the following menu

a. Add new Record.
b. Displayrecord.
c. Delete a particular record.
d. Search a record.
e. Update a record.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define structure for book record
struct Book 
{
    string title;
    string author;
    float price;
};

void addRecord() 
{
    Book newBook;
    ofstream outFile;
    outFile.open("books.txt", ios::app);
    
    if (outFile.fail()) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter price: ";
    cin >> newBook.price;
    
    outFile << newBook.title << "|" << newBook.author << "|"  << newBook.price << endl;
    
    cout << "Record added successfully." << endl;
    
    outFile.close();
}

void displayRecord()
{
    Book book;
    ifstream inFile;

    inFile.open("books.txt");
    
    if (inFile.fail()) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    
    cout << "\nBook Records:" << endl;
    while (getline(inFile, book.title, '|')) 
    {
        getline(inFile, book.author, '|');
        
        inFile >> book.price;
        inFile.ignore();
        
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "Price: " << book.price << endl;
        cout << "----------------" << endl;
    }
    
    inFile.close();
}

void deleteRecord() 
{
    string title;
    ifstream inFile;
    ofstream tempFile;

    Book book;

    inFile.open("books.txt");
    tempFile.open("temp.txt");
    
    
    if (inFile.fail() || tempFile.fail()) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    
    cout << "Enter the title of the book to delete: ";
    cin.ignore();
    getline(cin, title);
    
    bool found = false;
    while (getline(inFile, book.title, '|')) 
    {
        getline(inFile, book.author, '|');
        
        inFile >> book.price;
        inFile.ignore();
        
        if (book.title != title) 
        {
            tempFile << book.title << "|" << book.author << "|" << book.price << endl;
        } else 
        {
            found = true;
        }
    }
    
    inFile.close();
    tempFile.close();
    
    remove("books.txt");
    rename("temp.txt", "books.txt");
    
    if (found) 
    {
        cout << "Record deleted successfully." << endl;
    } else 
    {
        cout << "Record not found." << endl;
    }
}

void searchRecord() 
{
    string title;
    ifstream inFile;
    
    Book book;

    inFile.open("books.txt");
    
    if (inFile.fail())
    {
        cout << "Error opening file." << endl;
        return;
    }
    
    cout << "Enter the title of the book to search: ";
    cin.ignore();
    getline(cin, title);
    
    bool found = false;
    while (getline(inFile, book.title, '|')) 
    {
        getline(inFile, book.author, '|');
        
        inFile >> book.price;
        inFile.ignore();
        
        if (book.title == title) 
        {
            cout << "Record found:" << endl;
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Price: " << book.price << endl;
            found = true;
            break;
        }
    }
    
    if (!found) 
    {
        cout << "Record not found." << endl;
    }
    
    inFile.close();
}


void updateRecord() 
{
    string title;
    ifstream inFile;
    ofstream tempFile;

     Book book;

    inFile.open("books.txt");
    
    tempFile.open("temp.txt");
   
    
    if (inFile.fail() || tempFile.fail()) 
    {
        cout << "Error opening file." << endl;
        return;
    }
    
    cout << "Enter the title of the book to update: ";
    cin.ignore();
    getline(cin, title);
    
    bool found = false;
    while (getline(inFile, book.title, '|')) 
    {
        getline(inFile, book.author, '|');
        inFile >> book.price;
        inFile.ignore();
        
        if (book.title == title) 
        {
            cout << "Enter new title: ";
            getline(cin, book.title);
            cout << "Enter new author: ";
            getline(cin, book.author);
            cout << "Enter new price: ";
            cin >> book.price;
            found = true;
        }
        
        tempFile << book.title << "|" << book.author << "|"  << book.price << endl;
    }
    
    inFile.close();
    tempFile.close();
    
    remove("books.txt");
    rename("temp.txt", "books.txt");
    
    if (found) 
    {
        cout << "Record updated successfully." << endl;
    } else 
    {
        cout << "Record not found." << endl;
    }
}


int main() {
    int choice;
    
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add new Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Delete a particular Record" << endl;
        cout << "4. Search a Record" << endl;
        cout << "5. Update a Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecord();
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                searchRecord();
                break;
            case 5:
                updateRecord();
                break;
            case 6:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
    
    return 0;
}