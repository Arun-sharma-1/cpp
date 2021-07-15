 #include<iostream>
#include<fstream>
// variable have limited scope if we want to store for long time then we have to store in it memory 
//  for this we use file handling 
// we can use multiple mode in a single function using | like--> ios:: in |ios::out
// out is default for ofstream 
// in is default for ifstream
using namespace std;
int main(){
	fstream my_file;
	my_file.open("blank");
//	string name[7]={"arun","kushal","lovish"};
//	int age[9]={34,2,21};
               string name[7];
	int age[9] ;
	if(!my_file){
		cout<<"file not created";
	} else{
		cout<<"file created successfully"<<endl;
//		my_file<<"file created successfully"<<endl;
		for(int i=0; i<2; i++){
//			cout<<name[i]<<" "<<age[i]<<endl;
			my_file>>name[i]>>age[i] ;
			my_file<<name[i]<<" "<<age[i]<<endl;
		}
		
//		my_file.close(); // closing of file 
	}
}

 
