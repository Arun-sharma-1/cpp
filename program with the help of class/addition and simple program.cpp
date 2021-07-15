#include<iostream>
using namespace std;
class swap{
	int n1,n2;
	public:
		void take_data(){
			cout<<"enter value of n1 and n2";
			cin>>n1>>n2;
			
		}
		void swap_function(){
			n1=n1+n2;
			n2=n1-n2;
			n1=n1-n2;
		}
	 void get_data(){
			cout<<n1<<n2;
		}
};
int main(){
//  int a=1,b=3;
    class swap s1;
   s1.take_data();
   s1.swap_function();
   s1.get_data();
}
