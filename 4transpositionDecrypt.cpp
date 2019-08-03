#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout << "Name : MyName"<<endl;
	cout << "Roll no. : MyRollNo." << endl;
	int l;
	cout << "enter length of key";
	cin >> l;
	int min=1;
	int max=pow(10,l);
			cout << "enter message";
		string message;
		getline(cin,message);
		getline(cin,message);
	for(int x=min;x<max;x++){
		int num=x;
		int arr[l];
		bool greater=false;
		for(int j=l-1;j>=0;j--){
			arr[j]=num%10;
			num=num/10;
			if(arr[j]>=l){
				greater=true;
			}
		}
		for(int i=0;i<l-1;i++){
			for(int j=i+1;j<l;j++){
				if(arr[i]==arr[j]){
					greater=true;
				}
			}
		}
		if(greater){
			continue;
		}

		cout <<"key ";
		for(int i=0;i<l;i++){
			cout << arr[i]+1;
		}
		cout << " ";
		int r=l;
		int c=message.size()/l;
		char ch[r][c];
		int k=0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				ch[i][j]=message[k++];
			}
		}
		for(int i=0;i<c;i++ ){
			for(int j=0;j<r;j++){
				cout << ch[arr[j]][i];
			}
		}
		cout << endl;
	}


	return 0;
}