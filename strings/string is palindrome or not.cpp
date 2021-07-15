#include<iostream>
using namespace std;
int palindrome(string s1){
	int l=s1.size();
	for(int i=0; i<l/2; i++){
		if(s1[i]==s1[l-1-i])
		return 1;
		else 
		return 0;
	}
}
int main(){
	// string is palindrome or not 
  string s1="arra";
//  s1.append("arra");
  if( palindrome(s1))
   cout<<"palindrome";
   else
   cout<<"not a palindrome";
}
