#include<iostream>
using namespace std;

int main(){
   

   int *B[3];

   B[0] = (int *)malloc(4*sizeof(int));
   B[1] = (int *)malloc(4*sizeof(int));
   B[2] = (int *)malloc(4*sizeof(int));

    // B[0] = {1,2,3,4};
    // B[1] = {5,6,7,8};
    // B[2] = {9,10,11,12};




   for(int i =0; i < 3; i++){
    for(int j =0; j<4; j++){
        cout<<B[i][j]<<" ";
    }

    cout<<endl;
   }
    return 0;
}