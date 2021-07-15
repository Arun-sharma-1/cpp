#include<bits/stdc++.h>
using namespace std;
class A{
	public:
	A(){
	  cout<<"class A "<<endl;   
	}
		~A(){
	  cout<<"class A des "<<endl;   
	}
	 
	
};
class B:public A{
	public:
	B(){
		cout<<"class B "<<endl;
	}
	~B(){
		cout<<"class B  des "<<endl;
	}
};
int main(){
// 	B *b1=new A
//  A *a1= new B();
//   delete a1;
B b1;
  
}
