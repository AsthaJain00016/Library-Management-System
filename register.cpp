#include<iostream>
#include<fstream>
#include "register.h"
using namespace std;
void registeruser(){
    string username , password;
    cout<<"Enter your user name: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;
    fstream file;
    file.open("users.txt",ios::out| ios::app);
    if(file.is_open()){
        file<<username<<" "<<password;
        file.close();
        cout<<"User has been registered succesfully!\n ";
    }
    else {
        cout<<"Error! user cannot be registered!\n ";
    }


}
