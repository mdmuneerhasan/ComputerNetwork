#include<iostream>
using namespace std;
int main(){
	cout << "Name : MyName"<<endl;
	cout << "Roll no. : MyRollNo." << endl;
	cout << "enter the key";
	string key;
	cin >> key;
	int a[key.size()];
	for(int i=0;i<key.size();i++){
		int value=0;
		for(int j=0 ; j<key.size(); j++){
			if(key[i]>key[j]){
				value++;
			}
		}
		a[i]=value;
	}
	cout <<"key" << endl;
	for(int i=0;i<key.size();i++){
		cout <<a[i]+1;
	}
	cout << "\nenter message";
	string message;
	getline(cin,message);
	getline(cin,message);
	int c=key.size();
	float row=(float)message.size()/(float)key.size();
	int r=row;
	
	if(row!=r){
		r=r+1;
	}
	int k=0;
	char arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){

			if(k<message.size()){
				if(message[k]==' '){
						arr[i][j]='_';
				}else{
						arr[i][j]=message[k];
				}
			}else{
						arr[i][j]='$';			
			}
			k++;
		}
	}

	cout << "transposition encryption" << endl;
	for(int i=0;i<c;i++){
		int min=0;
		for(int j=0;j<key.size();j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		a[min]=100;
		for(int j=0;j<r;j++){
			cout << arr[j][min];
		}
	}

	return 0;
}