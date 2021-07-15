 /*#include<iostream>
using namespace std;
int main(){
	// number of vowel in a string 
	string c="yeh hmari car h ye hum h or ye hamri pawri ho rhi h";
	int count=0,v=0;
	int upper_case,lower_case;
	for(int i=0; i<c.size(); i++)
		if(  c[i] == 'a' || c[i] == 'e' || c[i] == 'i' ||
            c[i] == 'o' || c[i] == 'u' || c[i] == 'A' ||
            c[i] == 'E' ||c[i] == 'I' || c[i] == 'O' ||
            c[i] == 'U'
		){
		
		count++;
}
 
	
	else{
	 v++;
	 
	}
 cout<<"vowels-->"<<v<<endl;
	cout<<count;
}
#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
*/
int main(){
    // number of vowel in a string 
    string c;
    getline(cin,c);
    
    int count=0,v=0;
    int upper_case,lower_case;
    
    for(int i=0; i<c.size(); i++)
        if(is_vowel(tolower(c[i]))) count++;
        else v++;
        
    cout<<"vowels-->"<<count<<endl;
    cout<<count;
}
