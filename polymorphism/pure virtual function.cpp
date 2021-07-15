#include<bits/stdc++.h>
using namespace std;

 
class Living_thing{
    public:
    virtual void respiration() = 0;
    // pure virtual syntax 
    virtual void eat() = 0; 
    //pure virtual function-->must be overrideen 
};

class Animal:public Living_thing{
    public:
    void respiration(){
        cout<<"Breathin in, breathing out"<<endl;
    }
    // void eat(){
    //     cout<<"Eating"<<endl;
    // }
};

class Human : public Animal{
	public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

int main(){
//     Animal a; cannot be created because 16,17 ,18 line is commented 
    Human h;
    h.eat( );
    h.respiration();
    return 0;
}
