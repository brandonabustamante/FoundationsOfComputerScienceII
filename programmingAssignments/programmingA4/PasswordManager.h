#include<string>

using namespace std;

class PasswordManager { 


    private:
    // Variables
        string username;
        string password;
    
    // Functions
        string encrypt(string);
        bool meetsCriteria(string);
    
    public:
    // Constructor
    PasswordManager() {
        username = "";
        password = "";
    }

    // Constructor with args
    PasswordManager(string usernameIN, string passwordIN) {
        username = usernameIN;
        password = passwordIN;
    }

    // Functions

    void setUsername(string);
    string getUsername();
    void setEncryptedPassword(string);
    string getEncryptedPassword();
    bool setNewPassword(string);
    bool authenticate(string);

    
};
