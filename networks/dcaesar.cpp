#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j,k;
	string s;
	cout<<"Enter the encrypted message\n";
	cin>>s;
	for(i=-26;i<26;i++){
		string t;
		for(j=0;j<s.size();j++){
			int temp = s[j]-'A'-i;
			if(temp<0)
				temp+=26;
			t+=temp+'A';
		}
		cout<<t<<' '<<"key: "<<i<<'\n';
	}
	return 0;
}