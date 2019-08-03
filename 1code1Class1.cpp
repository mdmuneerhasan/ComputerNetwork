#include<iostream>
#include<string>
using namespace std;
int main(){
    cout << "Name : MyName"<<endl;
    cout << "Roll no. : MyRollNo." << endl;
    cout << "enter the message" ;
    string message,encryp,decryp;
    cin >> message;
    cout <<"enter key";
    int key;
    cin >> key;
    for(int i=0;i<message.size();i++){
        int num=message[i]-'a'+key;
        char c=num+'a';
        encryp=encryp+c;
    }
    cout <<"encrypted message: "<< encryp<<endl;

    for(int i=0;i<encryp.size();i++){
        int num=encryp[i]-'a'-key;
        char c=num+'a';
        decryp=decryp+c;
    }
    cout <<"decrypted message: "<< decryp<<endl;
}