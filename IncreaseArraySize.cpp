#include<iostream>
using namespace std;

int main(){
    int *p = new int[5];
    int *q = new int[100];

    p[0] = 1;
    p[1] = 3;
    p[2] = 4;
    p[3] = 9;
    p[4] = 12;

    for(int i=0; i<5; i++){
        q[i] = p[i];
        
    }

    

    // p = q;
    // q = NULL;
    
    // delete []p;


    for(int i=0; i <10;i++){
        cout<<q[i]<<endl;
    }
    
 
    return 0;
}