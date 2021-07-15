   #include<iostream>
using namespace std;
int main(){
	
	
	 string s1;
   s1="arun sharma";
   cout<<s1;     // ----> arun sharma
   
    string a1="arun"; // string 
    char a2[]="sharma";// array of characthers
    string a3=a1+a2; // overloading allowed
    cout<<a3;
    // a1+123-->error
    // a1+"123"-->arun123
    // a1+'A'-->arunA-->mixed operation
   
   string str="arun";
   string strr=" sharma";
   string c=str+strr;
   cout<<c;// arun sharma
   
   string a="copy";
   string b="paste";
   a=b;
   cout<<a;// paste
}

