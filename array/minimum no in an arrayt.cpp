#include<iostream>
using namespace std;
class number{
	int a[20],n,min=0;
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
	void swap(){
		min=a[1];// store in a[1] because loop is starting from i=1
		for(int i=1; i<=n; i++){
		 if(min>a[i])
		 min=a[i];
		}
	 cout<<"minimum value in array is"<<min;
	}
};
int main(){
	number n1;
	n1.get_data();
	n1.swap();
}
