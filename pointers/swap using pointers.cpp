#include<iostream>
 using namespace std;
 	swap_function(int *a,int *b);
int main(){
	// program to swap two no without using third variable with pointers
	int a=1,b=2;
	swap_function(&a,&b);
	 
}
swap_function(int *a,int *b){
	
	 *a=*a+*b;
	 *b=*a-*b;
	 *a=*a-*b;
	cout<<*a<<endl<<*b;
//	swap_function(int *a,int *b);
}
