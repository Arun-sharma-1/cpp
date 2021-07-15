 /*
 #include<iostream>  
using namespace std;  
 
int reversee(string &s2){
     int l=s2.size();
     for(int i=0; i<l/2; i++)
     {
          swap(s2[i], s2[l - i - 1]);
           
     } 
}
int main()  
{    
     string s1="Arun";
      reversee(s1);
      cout<<s1;
      
}    
*/

#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string str = "pawri ho rhi h"; 
  
     
    reverse(str.begin(), str.end()); 
  
    cout << str; 
    return 0; 
} 
