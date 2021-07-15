 #include<bits/stdc++.h>
 using namespace std;
 // uniary operator overloading 
//  -a,+a,++a,a++,--a,a--
 class testop{
      int x;
      public:
      testop():x(5){
          
      }
      testop operator -(){
         x=-x;
           
      }
      void display(){
           cout<<x;
      }
 };
 int main(){
      // operator overloading
      testop to;
     -to;
      to.display();
      
 }

