#include<bits/stdc++.h>
using namespace std;
int main(){
	// memory allocation exception-2
   long long a;
   cin>>a;
   char *arr=new(std::nothrow)char[a];
   if(arr){
   	cout<<"i have good memory ";
   	
   }	
   else
   cout<<"moj krdi ";
	
	
	
}
	
