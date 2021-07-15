 #include<iostream>
 using namespace std;
 class number{
 	int base,power;
 	public:
 		void get_data();
 		int Find_power( ){
 			if(power==0)
 			return 1;
 			else
 			return(base*Find_power(base,power-1));
		 }
		  
 };
 void number::get_data(){
 	cout<<"enter the value of base and power";
 	cin>>base>>power;
 }
 int main(){
 	class number n1;
 	n1.get_data();
 	n1.Find_power( );
 }
