  #include<bits/stdc++.h>
using namespace std;
class details{
	public:
		int &age;
	   string name;
		details (string n, int a):name(n ),age(a ){
		}
		void introduce(){
			cout<<name<<" "<<age<<endl;
		}
		int fun(){
		 int c=age=age-age;
		 cout<<c;
			
		}
};
int main(){
	int a=34;
	details p("arun",a);
	p.introduce();
	p.fun();
}
/*
  #include<bits/stdc++.h>
using namespace std;
class details{
	public:
		int age;
	 const string name;
		details (string n, int a):name(n ),age(a ){
		}
		void introduce(){
			cout<<name<<" "<<age;
		}
};
int main(){
	details p("arun",20);
	p.introduce();
}



 

 #include<bits/stdc++.h>
using namespace std;
class details{
	public:
		int age;
		string name;
		details (string name, int age):name(name ),age(age ){
		}
		void introduce(){
			cout<<name<<" "<<age;
		}
};
int main(){
	details p("arun",20);
	p.introduce();
}*/
