#include<bits/stdc++.h>
using namespace std;
// virtual destructor
class base{
	public:
	base(){
		cout<<"base constructor "<<endl;
	}
	virtual~ base(){
		cout<<"base destructor "<<endl;
		
	}
};
class derived:public base{
	public:
               derived(){
		cout<<" derived constructor "<<endl;
	}
	~derived(){
		cout<<" derived destructor "<<endl;
		
	}
};

int main(){
	 
//	base *b=new derived();

	derived *d=new derived();
	base *b=d;
	delete b; // only base constructor will be deleted not the derived constructor
	
}
