#include<bits/stdc++.h>
using namespace std;
int main(){
	// iterators
	vector<int>arr={1,2,3,4,5};
  	vector<int>::iterator i; // -=>syntax of iterator
	
	for(i=arr.begin(); i!=arr.end(); i++)
	{
		cout<<*(i)<<" ";
	}
	cout<<endl;
	vector<int>::reverse_iterator r_i;
	for(r_i=arr.rbegin(); r_i!=arr.rend(); r_i++)
	{
	    cout<<*r_i<<" ";
	}
	
		cout<<endl;
  for(int i = 0 ; i < arr.size() ; i++){
          cout<<arr.at(i)<<" ";
     }
}
