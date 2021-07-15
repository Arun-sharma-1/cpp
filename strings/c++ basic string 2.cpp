#include<iostream>
using namespace std;
int main(){
	string s1;
	s1="arun sharma";
 s1.assign("arun sharma");
	cout<<s1;
		s1.append(" is going to gym");
//		s1.insert(1," badshah ");
//		cout<<s1<<endl;
		s1.replace(2,2,"A"); // input-->Arun >> output--> ArA
			s1.replace(1,4,"A");// 1-->index, 4-->upto length >> output-->aA
			
			string b1;
            b1.assign("arun sharma s going  s to gym  ");
            int index =b1.find("s "); // it return the index of starting s 
   
            int inde =b1.rfind("s ");// it return the index of last s
              cout<<inde;
              // if the string that you are searching is not present in the sentence then it will
              // return -1
              
            int i=  s1.compare(s2); // compare two strings 
            //   if both are same then it return 0
            // s1-->Amit
            // s2-->Arun
            // it compares characther by characther if the difference of ascii value of s1 and s2 is -ve than 
            // it will return -1 and if positive then it will return +1
            
            int p=s1.size(); // use for finding the length of string 
    
}
