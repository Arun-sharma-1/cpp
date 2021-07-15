#include <iostream>
using namespace std;

int main() {
  string s1("67890");
  string s2("abcde");
  s1.erase(4,5);
  cout<<s1<<endl;
  s1.insert(3,s2);
   cout<<s1<<endl;
   s2.replace(1,3,s1); 
   cout<<s2<<endl;  
}  
