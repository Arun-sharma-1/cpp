#include<iostream>
#include<iomanip>
 // setw
 using namespace std;
 int main(){
 	string s1,s2;
 	cout<<"enter string s1 and s2 ";
 	cin>>s1>>s2;
 	// s1-->arun
 	// s2-->sharma
 	// the value of setw must be greater than 2nd string characther 
 	cout<<s1<<setw(10)<< s2<<endl;
 	cout<<setfill('3');
 	cout<<s1<<setw(10)<<s2<<endl;
 	 
 	
 }
