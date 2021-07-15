#include<iostream>
using namespace std;
// call by address
void incre(int *a){ // formal argument
	(*a)++;
	cout<<*a<<endl;
}  
//  actual and formal argument have different memory location
int main(){
	int x=3;
	incre(&x); // actual argument
	cout<<x;
}
