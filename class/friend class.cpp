#include<iostream>
using namespace std;
// friend class
class XYZ{
  private:
  	char ch='A';
  	int num=1;
   public:     
               friend class ABC; 
};
 class ABC{
 	public:
     void display(XYZ objj)
     {
     	cout<<objj.ch<<endl;
     	cout<<objj.num<<endl;
     }
 };
 int main(){
 	ABC obj;
 	XYZ O1;
 	obj.display(O1);
 }
 
 **********************************************************************************
 #include<iostream>
using namespace std;
 
class XYZ{
  private:
  	char ch='A';
  	int num=1;
   public:     
               friend void display(XYZ obj); 
};
void display(XYZ obj){
	 	cout<<obj.ch<<endl;
     	cout<<obj.num<<endl;
     }
     int main(){
     	XYZ obj;
     	display(obj);// function call
     }
