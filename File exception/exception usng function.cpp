#include<bits/stdc++.h>
using namespace std;
int divison(int a, int b){
 
// 	throw "divison not possible ";
if(b==0){
            string str = "Division by zero is not possible";
            throw str;
        }
	return a/b;

}
int main(){
	int a,b,c;
	cout<<"enter the value of a and b ";
	cin>>a>>b;
    try{
    	c=divison(a,b);
    	
    }
//    catch(const char *err){
//            cout<<err;    	
//    }
        catch(string str){
        	cout<<str;
        }
	
}
