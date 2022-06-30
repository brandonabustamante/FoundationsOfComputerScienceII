#include"PasswordManager.h"
#include<iostream>
#include <fstream>  

using namespace std;

 
void readFile(PasswordManager[], string);

void readFile(PasswordManager pwMan[], string filename) {
    ifstream inFile;
    string usernameIN;
    string passwordIN;
    int index = 0;
    inFile.open(filename);

    while(inFile) {
        inFile >> usernameIN;
        inFile >> passwordIN;
        //cout << usernameIN << endl;
        //cout << passwordIN << endl;

        pwMan[index].setUsername(usernameIN);
        pwMan[index].setNewPassword(passwordIN);
        //pwMan[index].setEncryptedPassword(password);
        index++;
    }
    
    inFile.close();
}


int main() {
    const int size = 4;
    PasswordManager pwMan[size];
    string filename;
    string netID;
    string passwordIN;
    string nPassword;

    

    cout << "Please enter the name of the input file:" << endl;
    cin >> filename;
    readFile(pwMan, filename);

    //cout << pwMan[0].getUsername() << endl;
    cout << "Please enter your netID:" << endl;
    cin >> netID;
    cout << "Please enter your old password:" << endl;
    cin >> passwordIN;
    cout << "Please enter your new password:" << endl;
    cin >> nPassword;
    cout << endl;

    for(int index = 0; index < size; index++) {
        if(pwMan[index].getUsername() == netID) {
            if(pwMan[index].authenticate(passwordIN)) {
                pwMan[index].setNewPassword(nPassword);
                cout << "Password has been changed for netID:" << pwMan[index].getUsername();
                cout << endl;
            }
        }
    }


    

    return 0;
}



