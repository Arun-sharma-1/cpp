#include<bits/stdc++.h>
using namespace std;
//  uppercase to lowercase and vice-versa
int main(){
	string s="ARUN SHARMA";
	for(int i=0; i<s.size(); i++){
//		if(s[i]>='A'&&s[i]<='Z') // without this step whitespace is also converted
		s[i]+=32;// uppercase to lowercase
	}
	cout<<s<<endl;
	string s1="arun sharma";
		for(int i=0; i<s.size(); i++){
//		if(s[i]>='a'&&s[i]<='z')
		s1[i]=s1[i]-32;
	}
		cout<<s1;
}
