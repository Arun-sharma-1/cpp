#include<bits/stdc++.h>
using namespace std;
// inheriting template class
template<class arun>
class base{
	public:
	arun arr[3];
	
	arun add(){
		return arr[0]+arr[1]+arr[2];
	}
};
template <class sharma>
class derived: public base<sharma>
{
	public:
	derived(sharma arr[]){
		this->arr[0]=arr[0];
		this->arr[1]=arr[1];
		this->arr[2]=arr[2];
		
	}
};
int main(){
	int arr1[]={1,2,3};
	derived <int >d(arr1);
	cout<<d.add()<<endl;
		string arr2[]={"this ", "is ", "done "};
               derived <string>d(arr2);
               cout<<d.add()<<endl;

}
