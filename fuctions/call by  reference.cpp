#include<iostream>
using namespace std;
// call by  reference
void incre(int &a){ // formal argument
	a++;
	cout<<a<<endl;
}  
// both formal and actual argument share same memory location and change will occur in both of the variables
int main(){
	int x=3;
	incre(x); // actual argument
	cout<<x;
}
