#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int arr[10][10];
//    Matrix(){
//        for(int i = 0 ; i < 10 ; i++){
//            for(int j = 0 ; j < 10 ; j++){
//                arr[i][j] = (i+1)*(j+1);
//            }
//        }
//    }


    Matrix operator +(Matrix b){
        Matrix res;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                res.arr[i][j] = arr[i][j]+b.arr[i][j];
            }
        }

        return res;
    }

    void display(){
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cout<<setw(3)<<arr[i][j]<<" ";
            }
            cout<<endl;
        }                                
    }
};

int main(){
    Matrix a[2][2]={1,2,3,4};
    Matrix b[2][2]={1,2,3,4};

    // a.display();

    Matrix c[2][2] = a[2][2]+b[2][2];
    c[2][2].display();

    return 0;
}

