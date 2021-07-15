 #include<iostream>
#include<fstream>
using namespace std;
int main(){
  
    fstream f;
    f.open("blank",ios::in| ios::out|ios::trunc);
//   fstream myfile("blank",ios::in|ios::out|ios::trunc);
   if(!f){
   	cout<<"some error";
   	
   }  
//   myfile<<"hello world";
//   myfile.seekg(6,ios::beg);
  f<<"hello world"; // --> giving input to "blank" 
 f.seekg(4,ios::beg);
// f.seekg(4,ios_base::beg);
//   char A[54];
//   myfile.read(A,5);
//   A[53]=0;
string A;
 f>>A; // taking input from file 
   cout<<A<<endl;
//  	   f.seekg(5,ios::end);  ??????????
}
