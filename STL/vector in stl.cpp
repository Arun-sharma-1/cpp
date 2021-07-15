#include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int> arr){
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
	 vector<int>arr;  //blank vector
// 	 vector<int>v2(4);  size of vector is 4
	// vector<int>v3(5,10);   size of vector is 5 and every element is 10
// 	 vector<int>v4{1,2,3,4};
//   for(int i=0; i<v3.size(); i++)
    // cout<<v3[i];
    
     cout<<arr.size()<<endl;
     arr.push_back(10);
     arr.push_back(10);
     arr.push_back(10);
     arr.push_back(10);
     arr.push_back(10);
      cout<<arr.size()<<endl;
      
      display(arr);
      arr.pop_back();
      arr.pop_back();
      display(arr);
     
     
      
}
