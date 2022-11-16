#include<iostream>
using namespace std;

int main(){

    int A[5];
    int B[5] ={1,2,3,4,5};
    int C[5] = {1,2};
    int D[5] = {0};
    int E[]= {1,2,3,4,5,6,7};

    for(int i =0; i < 5; i++){
        cout<<A[i]<<endl;
    }

     for(int i =0; i < 5; i++){
        cout<<B[i]<<endl;
    }

     for(int i =0; i < 5; i++){
        cout<<C[i]<<endl;
    }

     for(int i =0; i < 5; i++){
        cout<<D[i]<<endl;
    }

     for(int i =0; i <= 10; i++){
        cout<<E[i]<<endl;
    }

    return 0;
}