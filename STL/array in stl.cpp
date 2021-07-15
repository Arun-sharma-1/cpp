#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
	// array in stl
	array<int,4>A={1,2,3,4};
	array<int,4>B={5,6,7,8};
// 	cout<<A.at(3);
//   cout<<A[3];
    //   cout<<A.front();
    //  cout<<A.back();
    
    // A.fill(10);
    // for(int i=0; i<4; i++){
    //     cout<<A.at(i);
    // }
    
      cout<<A.size();
    
  /*  A.swap(B);
    for(int i=0; i<4; i++){
         cout<<A.at(i);
     }
     for(int i=0; i<4; i++){
         cout<<B.at(i);
     }*/
     
     
    cout<<A.begin();// point first element 
    cout<<A.end(); // point last element
    
}
