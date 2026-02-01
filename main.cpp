#include<iostream>
#include "login.h"
#include "register.h"
#include "menu.h"
using namespace std;
int main(){
    int choice;
    bool exitprogram=false;

    cout<<"--Library Management System--\n";
    while(!exitprogram){
        bool loggedin=false;
        do{
            cout<<"1. Login\n 2.Register\n 3.Exit\n ";
            cout<<"Enter your choice ";
            cin>>choice;
            
            switch(choice){
                case 1:
                if(login()){
                    cout<<"Login Successfull!\n";
                    loggedin=true;
                    showMainmenu();
                } else{
                    cout<<"Login Failed. Try again\n";
                }

                break;
                case 2:
                registeruser();
                break;
                case 3:
                cout<<"Exiting...\n";
                exitprogram=true;
                break;
                default: 
                cout<<"Invalid choice.\n";
            }
        } while(!loggedin && !exitprogram);
    }


}