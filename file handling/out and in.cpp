
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream my_file;
	my_file.open("blanks", ios::in);
	string name[7];
	int age[9];
	if(!my_file){
		cout<<"file not created";
	} else{
		cout<<"file created successfully"<<endl;
		my_file<<"file created successfully"<<endl;
		for(int i=0; i<2; i++){
			my_file>>name[i]>>age[i];
			cout<<name[i]<<" "<<age[i]<<endl;
		}
		
		
	}
}
