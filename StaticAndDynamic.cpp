#include<iostream>
using namespace std;

int main(){

    int A[10] = {2,3,4,5,6};
    int *p;
    int i;

    p = (int *)malloc(5* sizeof(int));
    p[0] = 1;
    p[1] = 3;
    p[2] = 4;
    p[3] = 9;
    p[4] = 12;

    for(i=0; i <5;i++){
        cout<<A[i];
    }

    cout<<endl;

    for(i=0; i <5;i++){
        cout<<p[i];
    }

    cout<<endl;

    return 0;
}