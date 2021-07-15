#include<iostream>
using namespace std;
int main(){
	// use of getline, push_back,pop_back in string
	string str;
	cout<<"Enter a String ";
	getline(cin,str);
	str.push_back('A');
	cout<<str<<endl;
	str.pop_back();
	cout<<str<<endl;
}
