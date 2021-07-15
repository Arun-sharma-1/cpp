#include<iostream>
using namespace std;
template< class X1, class X2>
 
X1 max1(X1 a , X2 b)
{
	return a>b?a:b;
}
int main(){
	// templates 
	cout<<max1(2,'a')<<endl;
//	cout<<max1(2 , 5.2)<<endl;
             cout<<max1<int,double>(2,5.2); 
               cout<<max1('a','b');

	
}
