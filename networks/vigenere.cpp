#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int i,j,k,n;
	vector<vector<char> > a(26,vector<char>(26));
	k=0;
	n=26;
	for(i=0;i<n;i++){
		k=i;
		for(j=0;j<n;j++){
			a[i][j]='A'+k;
			k++;
			if(k==26)
				k=0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
	cout<<"Enter the message\n";
	string s;
	cin>>s;
	cout<<"Enter the key\n";
	string key;
	cin>>key;
	k=0;
	int mod = key.size();
	for(i=key.size();i<s.size();i++){
		key+=key[k%mod];
		k++;
	}
	cout<<key<<'\n';
	string encrypt;
	for(i=0;i<s.size();i++){
		encrypt+= a[s[i]-'A'][key[i]-'A'];
	}
	cout<<encrypt<<'\n';
	return 0;
}