#include<iostream>
using namespace std;
class sum{
	int a[10], n, odd=0,even=0;
	public:
		void get_data(){
		
			cout<<"enter size of array ";
			cin>>n;
			int i;
		 cout<<"enter array elements "<<endl;
		 for(  i=1; i<=n; i++){
		 
		  cout<<(int)i<<" Element is-->";
		 cin>>a[i];
		}
	}
	void sum_of_odd_and_even(){
	 for(int i=1; i<=n; i++){
	 
	 if(a[i]%2==0)
     even+=a[i];
	 else
	 odd+=a[i];
	 	 
		  }
	 	 cout<<"sum of even no is "<<even<<endl;
	 	  cout<<"sum of odd no is "<<odd<<endl;
	}

};
int main(){
 class	sum s1;
 s1.get_data();
	s1.sum_of_odd_and_even();
	
}
