#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j,k;
	string s,t;
	int key;
	cout<<"Enter the key\n";
	cin>>key;
	cout<<"Enter the message\n";
	cin>>s;
	for(i=0;i<s.size();i++){
		t+=s[i]+key;
	}
	cout<<"\n\nEncrypted message is "<<t<<'\n';
	while(1){
		int key2;
		string m;
		cout<<"\n\nEnter the key to decrypt\n";
		cin>>key2;
		for(i=0;i<t.size();i++){
			m+=t[i]-key2;
		}
		cout<<"\n\nDecrypted message is "<<m<<'\n';
		if(key2!=key){
			cout<<"Wrong decryption, please try again\n\n";
		}
		else{
			cout<<"Correct decryption\n";
			break;
		}
	}
	return 0;
}