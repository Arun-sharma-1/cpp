//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	// structres
 
 struct disc
 {
 	int no;
 	char name[23];
 	int price;
 	
 };
//  struct disc d1={123,"arun disc",458};  in c 
  disc d1={123,"arun disc",458};// in c++
  disc d2;
  d2=d1;
  strcpy(d2.name,"disc arun");
  cout<<" "<<d1.no <<"  "<< d1.name<< " "  <<d1.price <<endl ;
    cout<<" "<<d2.no <<"  "<< d2.name<< " "  <<d2.price  ;
  
}
