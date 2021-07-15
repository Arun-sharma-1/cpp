#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	A(){
		cout<<"constructor called "<<endl;
	}
		
	~A(){
	cout<<"destrutor called"<<endl;	
	}		
};
int main(){
     
     A *a1=new A[3];
     delete[] a1;
     
} 
