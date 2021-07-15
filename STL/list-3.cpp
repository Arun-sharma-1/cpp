 #include<bits/stdc++.h>
using namespace std;

int main() {
	   list<int>l{1,2,3,4,5};
	   //cout<<"size of list --> "<<l.size()<<endl;
	   //cout<<"Front element in list --> "<<l.front()<<endl;
	   //cout<<"Back element  in list ==> "<<l.back()<<endl;
	   //l.clear(); // clears the list
	   // cout<<"size of list --> "<<l.size()<<endl;
	   // cout<<"Reverse list "<<l.reverse()<<endl;
	   l.reverse();
	   //list<int>::iterator it;
	   for(   auto i=l.begin(); i!=l.end(); i++)
     {
          cout<<*i<<" ";
     }
	    
	   
}
