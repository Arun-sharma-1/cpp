#include<iostream>
using namespace std;
template< class X>
X max1(X a , X b){
	return a>b?a:b;
}
int main(){
	// templates 
	cout<<max1(2,3)<<endl;
	cout<<max1(20.2,5.2)<<endl;
            cout<<max1('a','b');

	
}
