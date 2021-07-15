#include<iostream>
using namespace std;
class Add{
	int n1,n2;
	public:
	Add(int a,int b){
	 
	 n1=a;
	 n2=b;
	}
    int  sum(){
//    	cout<<"enter the value of n1 and n2"
//    	cin>>n1>>n2;
		int p=n1+n2;
		cout<<p<<endl;
	}
};
int main(){
	// program with contructor
	int x,y;
		cout<<"enter the value of x and y";
	cin>>x>>y;
	
	Add A1( x,y);
	A1.sum();
// cout<<A1.sum(); --> this will give garbage value 	
}
