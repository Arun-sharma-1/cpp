 #include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,d;
	cout<<"enter two integer ";
	cin>>a>>b;
    try{
    	if(b==0){
    		throw "division is not possible";
	    }
	    else{
	    	d=a/b;
	    	cout<<d;
	    }
    } 
       catch(const char *error){
       	// we are using const char* so while catching 
       	// this exception we hae to use const char* in
       	// catch block
       	cout<<error<<endl;
       }
}
