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
	cout<<"Enter the encrypted message\n";
	string s;
	cin>>s;
	cout<<"Enter the key\n";
	string key;
	cin>>key;
	k=0;
	for(i=key.size();i<s.size();i++){
		key+=key[k];
		k++;
	}
	string decrypt;
	for(i=0;i<s.size();i++){
		for(j=0;j<n;j++){
			if(a[j][key[i]-'A']==s[i]){
				decrypt += 'A'+j;
				break;
			}
		}
	}
	cout<<decrypt<<'\n';
	return 0;
}