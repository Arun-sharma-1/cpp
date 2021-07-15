#include<bits/stdc++.h>
 using namespace std;
class sample{
    int i;
    static int count;
    public:
    sample(){
        i=0;
        count++;
    }
    static void showdata(){
        cout<<count;
    }
};
int sample::count;
// or 
int sample::count=0;
int main(){
    sample s1,s2;
//    s1.showdata();
    sample::showdata();
}
