#include<iostream>
using namespace std;
class bubble_sort{
	private:
		int a[23],round,n,i , temp;
    public:
    	void get_data(){
    		int n;
    			cout<<"enter size of array ";
			cin>>n;
			int i;
		 cout<<"enter array elements "<<endl;
		 for(  i=1; i<=n; i++){
		 
		  cout<<(int)i<<" Element is-->";
		 cin>>a[i];
		}
    		
		}
//    	bubble_sort( ){
// int array[23];
// int size;
//           this->a[23]=array[23];
//           this->n=size;
//           
//		}
		
	int sort(){
 	       int round , i ,temp ;
                for(round=0; round<=n; round++){
                	
   
               for(i=0; i<=n-1-round ; i++){
  
   if(a[i]>a[i+1]){
   	temp=a[i];
   	a[i]=a[i+1];
   	a[i+1]=temp;
   }
   }
}
	cout<<"sorted array is "<<endl;
  	for(int i=1; i<=n; i++)
  	 cout<<" "<<a[i];
 
 }
   
   
  
};
int main(){
	 
	  class bubble_sort b1;
	 	b1.get_data();
	 	b1.sort();
	 	
	
   
   }
	

