 #include<bits/stdc++.h>
 using namespace std;
 class testclass{
   int count;
   public:
//    testclass():count(5){} -->  initilizer list method 
testclass(){
     count=5;
}
   
   void operator--(){                // syntax 
        count=count-3;
   }
   void display(){
        cout<<count;
   }
 };
 int main(){
      testclass tc;
     //  --tc;
      tc.display();
 }

