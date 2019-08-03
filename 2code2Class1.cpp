#include<iostream>
#include<string>
using namespace std;
int main(){
    cout << "Name : MyName"<<endl;
    cout << "Roll no. : MyRollNo." << endl;
    cout << "enter encrypted message" ;
    string message,encryp,decryp;
    cin >> encryp;
    int key=1;
    while(key++){
        decryp="";
    for(int i=0;i<encryp.size();i++){
        int num=encryp[i]-'A'-key;
        if(num<0){
            num=num+26;
        }
        char c=num+'A';
        decryp=decryp+c;
    }
    cout <<"key: "<<key<<" decrypted message: "<< decryp<<endl;
    if(key>26){
        break;
    }
    }
}