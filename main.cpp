#include<iostream>
using namespace std;
int main(){

    srand(time(0));
    int l_p;
    string password;
    std::string allChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&";

    cout << "*************************\n";
    cout << "RANDOM-PASSWORD-GENERATOR\n";
    cout << "*************************\n";

    cout << "Enter length of password: ";
    cin >> l_p;
    if(l_p > 5){
        for(int i=0; i<l_p; i++){
            char random_char = rand() % allChars.length() + 1;
            password += random_char;
        }
        cout << "Your random passwod is ready: " << password << endl;
    }else{
        cout << "Length of password must be greater than '5'" << endl;
    } 
}