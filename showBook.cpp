#include<iostream>
#include<fstream>
#include "showBook.h"
using namespace std;
void showBook(){
    fstream file;
    file.open("Books.csv", ios::in);
    
    if(file.is_open()){
        string line;
        cout<<"-------List of Books--------\n";
        cout<<"Book Id, Book Name, Author, Quantity";
        while(getline(file,line)){
            cout<<line<<endl;
        }
        file.close();
    }
    else cout<<"Unable to open the file!";
}