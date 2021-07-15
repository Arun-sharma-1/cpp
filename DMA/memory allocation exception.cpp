#include<bits/stdc++.h>
using namespace std;
int main(){
	// memory allocation exception
  long long a;
  cin>>a;
  try{
  	int *arr=new int[a];
  	
  }catch(const bad_alloc &e){
  	cout<<e.what()<<endl;
  }
  
  cout<<"i have good memory";
}
