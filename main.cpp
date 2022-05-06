#include <iostream>
#include "lib.cpp";
using namespace std;
int main() {
    int dim1;
    cin >>dim1;
float B[dim1];
for (int i=0; i<= dim1;i++){
    cin>> B[i];
}
cout << massimo(B,dim1);

    return 0;
}
