#include<iostream>
using namespace std;
class Test{
	public:
	Test(){
		cout<<"constructor called "<<endl;
	}
	~Test(){
		cout<<"destructor called "<<endl;
	}
};
int main(){
	try{
		Test T1; //  crete object nd itwill be destroyed after this 
		throw 10;
	}
	catch(int n){
		cout<<"catched"<<endl;
	}
	
}
