#include <iostream>
using namespace std;

bool armstrong(int x){
    int sum=0,num=x, d;
    while(x!=0){
        d=x%10;
        sum= sum+d*d*d;
        x/=10;
    }
    return num==sum;
}


int main (){
    cout<< armstrong(28);
}
