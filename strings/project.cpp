#include<bits/stdc++.h>
  
 using namespace std;
void isalpha(char ch){
      if(ch==tolower()&&ch)	
}

int main(){
            char ch;
            cout<<"enter a characther ";
   try{
   	if(!isalpha(ch)&&(!isdigt(ch)))
   	throw ch;
   
   else if(!isalpha(ch))
   throw "not an alphabet ";
   else if(!isdigit(ch))
   throw 1;
}
catch(const char *ex){
	cout<<ex<<endl;
} 

 catch(int n){
 	cout<<"Not a number "<<endl;
 
 }
 catch(...){
 	cout<<"it is a special characther ";
 }
 }
