#include<iostream>
// with the help of default arguments we can use a single function in different variety
using namespace std;
int add(int,int=0 ,int=0); 
int add(int a, int b, int c ){
//int add(int a, int b, int c=0 )  this is wrong 	
	return(a+b+c);
}
int main(){
	// Default arguments 
	int a, b,c ;
	cout<<"enter value of a , b and c ";
	cin>>a>>b;
//	add(a,b);
	cout<<"sum is "<<add(a,b);
}
 
