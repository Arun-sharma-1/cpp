#include<bits/stdc++.h>
using namespace std;
class wall{
	int length,breadth;
	public:
		wall(int len,int bre){          // parameterized constructor
			length=len;
			breadth=bre;
		}
		wall( const wall &obj){                     // copy constructor
			length=obj.length;
			breadth=obj.breadth;
			
		}
		int calculate_area(){                      // member function
			return(length*breadth);
		}
};
int main(){
	wall w1(1,2);
	cout<<w1.calculate_area()<<endl;
//	wall w2=w1;
	wall w2(w1);
	cout<<w2.calculate_area()<<endl;
}
