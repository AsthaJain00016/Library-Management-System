#include<iostream>
#include<string>
#include<fstream>
#include "addBook.h"
using namespace std;
void addBook(){
    fstream file;
    int Bookid; 
    string bookName, author;
    cout<<"Enter the Book id: ";
    cin>>Bookid;
    cout<<"Enter Book name: ";
    getline(cin,bookName);
    cout<<"Enter Author's Name: ";
    getline(cin,author);
    file.open("book.csv",ios::out|ios::app);
   if(file.is_open()){
    file<<Bookid<<" "<<bookName<<" "<<author;
    file.close();
    cout<<"Book has been added successfully! ";
   }
   else cout<<"Error! Book cannot be added.";
}