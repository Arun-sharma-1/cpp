#include<iostream>
using namespace std;
int main(){
     string s1="learn and grow";
     for(int i=0; i<s1.size(); i++){
          if(i==0){
               // s1[i]=toupper(s1[i]);
               s1[i]=s1[i]-32;
          }
          else if(s1[i]==' '){
               s1[i+1]=toupper(s1[i+1]);
          }
     }
     cout<<s1;
}
