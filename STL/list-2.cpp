 #include<bits/stdc++.h>
using namespace std;

int main() {
	    list<int>st = {80,21,39,10000,5};
     st.push_back(6);
     st.push_back(60);
     st.push_front(0);
     for( auto i=st.begin(); i!=st.end(); i++)
     {
          cout<<*i<<" ";
     }
     cout<<endl;
     st.pop_back();
     st.pop_front();
     for( auto i=st.begin(); i!=st.end(); i++)
     {
         cout<<*i<<" ";
     }
}
