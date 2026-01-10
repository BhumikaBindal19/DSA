#include <iostream>
using namespace std;

bool prime(int n){
    if (n<2) return 0;
    int num=2;
    while(num*num<=n){
        if(n%num==0) return 0;
        num++;
    }
    return 1;
}

int main (){
    cout<< prime(282);
}
