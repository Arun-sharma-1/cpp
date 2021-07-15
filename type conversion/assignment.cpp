#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class Matrix{
     public:
     int row;
     int cols;
     int mat[3][3];
     // constructor-->parametrised constructor
     Matrix(int r, int c){
          row=r;
          cols=c;
          
     }
     // copy constructor
     Matrix(Matrix & m){
          row=m.row;
          cols=m.cols;
     }
     void getdata(){
          cout<<"Give the elements of array "<<endl;
          for(int i=0; i<3; i++) {
          for(int j=0; j<3; j++)
          cin>>mat[i][j]; 
     }

     }
     
     void putdata(){
          
     cout<<"M2 Matrix is " <<endl;
     
     for(int i=0; i<3; i++){
      for(int j=0; j<3; j++)
     cout<<mat[i][j]<<" ";
     printf("\t");
     cout<<endl;
     }  
     }
};
int main(){
     Matrix M1(3,3);
     M1.getdata();
     
      
      Matrix M2=M1;
      M2.putdata();
      
     
     
     
     
     
}
