#include<bits/stdc++.h>
using namespace std;

int main() {
	    list<int>st = {80,21,39,10000,5};
    
	    for(auto i = st.begin() ; i!=st.end() ; i++ ){
        cout<<*i<<" ";
    }
	  cout<<endl;
	  
	  st.sort();
	  for(auto i=st.begin(); i!=st.end(); i++)
  {
      cout<<*i<< " ";
  }
}
