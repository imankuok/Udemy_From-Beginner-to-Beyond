#include <iostream>
using namespace std;
int main()
{
    string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string key("XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr");
    string secret_msg;
    cout<<"enter your secet message:"<<endl;
    getline(cin, secret_msg);
    
    string encrypted_msg;
    
    for (char c:secret_msg){
        size_t position = alphabet.find(c);
        if (position !=string::npos){
            char new_char = key.at(position);
            encrypted_msg += new_char;
        }
        else {
            encrypted_msg +=c;
            }
    }
    
    cout<<encrypted_msg<<endl;
    return 0;
}
