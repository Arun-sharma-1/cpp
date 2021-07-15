 #include<bits/stdc++.h>
 using namespace std;
 class employee{
     float  payment;
     public:
     employee(float p){
     	payment=p;
     }
      
     operator float(){
     	return payment;
     }	
 };
 int main(){
    float  salary=40000.44;
    employee emp(salary);
    float sal=(float)emp;
    cout<<sal;	
    cout<<payment;
 }
