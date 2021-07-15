 #include<iostream>
 using namespace std;
 class array{
      int a[29], size ,sum;
      public:
      void getdata(){
             
      cout<<"enter the size of array";
      cin>>size;
      cout<<"Array Elements are"<<endl;
      for(int i=1; i<=size; i++){
           cout<< (int)i<<" Element is-->";
         cin>>a[i];
         
     }
         
         sum=0;
         for(int i=1; i<=size; i++){
         	 sum+=a[i];
         	
		 }
		 cout<<sum<<endl;
      
      }
 };
 int main(){
      class array a1;
      a1.getdata();
 }
