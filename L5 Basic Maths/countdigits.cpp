#include <iostream>
#include <math.h>
using namespace std;

int countdigits(unsigned long long int n){
    // method 1
    int sum=0;
    while(n!=0){
        n/=10;
        sum++;
    }
    return sum;

    // method 2
    return (int)(log10(n)+1);
}

int main (){
    cout<< countdigits(2899);
}
