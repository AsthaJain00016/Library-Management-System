#include<iostream>
#include "menu.h"
#include "addBook.h"
#include "showBook.h"
using namespace std;
void showMainmenu(){
    int choice;
    bool exitmenu=false;
    while(!exitmenu){
        cout<<"\n------Main Menu-------\n";
        cout<<"1. Add Book\n";
        cout<<"2. Show Book\n";
        cout<<"3. Coming Soon\n";
        cout<<"4. Coming Soon\n";
        cout<<"5. Coming Soon\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            addBook();
            break;
            case 2:
            showBook();
            break;
            case 3:
            case 4:
            case 5:
            cout<<"Feature coming soon...";
            break;
            case 6:
            cout<<"Exiting...\n";
            exitmenu=true;
            break;
            default: 
            cout<<"Invalid choice. Please try again.\n";
        }
    }
}