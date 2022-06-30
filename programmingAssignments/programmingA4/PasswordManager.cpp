#include"PasswordManager.h"
#include<iostream> 
#include<stdbool.h>

string PasswordManager :: encrypt(string passwordIN) {
        int size = passwordIN.length();
        char curChar;
        string encPassword = "";

        for(int i = 0;i < size; i++) {
            curChar = passwordIN[i];
            curChar = ((curChar - 33) + 37) % 94 + 33;
            encPassword += curChar;
        }
            
        return encPassword;
}

bool PasswordManager :: meetsCriteria(string passwordIN) {
    const int RQSIZE = 15;
    const int MUSTCONTAIN = 3;
    int contains = 0;
    int count = 0;
    int size = passwordIN.length();

    bool upper = false, lower = false;
    bool digit = false, punct = false;

        if(size <= RQSIZE) {
            return false;
        }
        
        for(int i = 0; i < size; i++) {
            if(isupper(passwordIN[i])) {
                upper = true;
            }
            else if(islower(passwordIN[i])) {
                lower = true;
            }
            else if(isdigit(passwordIN[i])) {
                digit = true;
            }
            else if(ispunct(passwordIN[i])) {
                punct = true;
            }
        }

        if(upper)
            count++;
        if(lower)
            count++;
        if(digit)
            count++;
        if(punct)
            count++;
        
        if(count >= 3)
            return true;

    return false;

}

void PasswordManager :: setUsername(string usernameIN) {
    username = usernameIN;
}

string PasswordManager :: getUsername() {
    return username;
}

void PasswordManager :: setEncryptedPassword(string passwordIN) {
    password = passwordIN;
}

string PasswordManager :: getEncryptedPassword() {
    return password;
}

bool PasswordManager :: setNewPassword(string nPassword) {
    
    if(meetsCriteria(nPassword)){
        string encPassword = encrypt(nPassword);
        password = encPassword;
        return true;
    }

    return false;
}

bool PasswordManager :: authenticate(string passwordIN) {

    string encPassword = encrypt(passwordIN);

    if(password == encPassword)
        return true;

    return false;
}






