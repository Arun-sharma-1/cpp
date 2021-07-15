    #include<bits/stdc++.h>
using namespace std;

int main() {
	   list<int>l{1,2,3,4,5};
	   list<int>m={10,11,12,13,14};
	   
	   list<int>::iterator i=l.begin();
	   for(auto i=l.begin(); i!=l.end(); i++)
	   {
	       cout<<*i<<" ";
	   }
	   cout<<endl;
	   i=l.begin(); // for running this program line 7 should be there 
	   l.insert(i,7);
	   //l.insert(l.begin(),5,'*');
	   // insert ASCII of '*' 5 times beginning of list 
	   cout<<"new list is "<<endl;
	   for(auto i=l.begin(); i!=l.end(); i++)
	   {
	       cout<<*i<<" ";
	   }
	   cout<<endl;
	   l.merge(m);
	   for(auto i=l.begin(); i!=l.end(); i++)
	   {
	       cout<<*i<<" ";
	   }
	   
