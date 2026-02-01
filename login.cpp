#include<iostream>
#include<fstream>
#include "login.h"
using namespace std;
bool login(){
   string u , p, username, password;
   cout<<"Enter your username: ";
   cin>>u;
   cout<<"Enter your password: ";
   cin>>p;
   fstream file;
   file.open("users.txt",ios::in);  
   if(file.is_open()){
    bool loginsuccess=false;
    while(file>>username >> password){
        if(u==username && p==password){
            loginsuccess=true;
            break;
        }
    }
    file.close();
    if(loginsuccess){
        cout<<"Login Successfull! \n";
        return true;
    }
    else{
        cout<<"Invalid username or password.\n ";
        return false;
    }

   }
   else {
    cout<<"Error! unable to open file.\n";
    return false;
   }

}