#include<iostream>
using namespace std;
//MULTIPLE TEMPLATE

template <class T>
T sum(T a[],int size){
	T s=0;
	for(int i=0; i<size; i++){
		s=s+a[i];
	}
	return s;
}
int main(){
	int a[]={1,2,3};
	double b[]={2.2,4.2,3.2};
	cout<<sum(a,3)<<endl;
	cout<<sum(b,3)<<endl;
	
}
