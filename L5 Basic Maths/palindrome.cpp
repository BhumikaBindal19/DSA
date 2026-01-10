#include <iostream>
#include <climits>
using namespace std;

bool palindrome(int x){
    if (x<0) return 0;
    int n=0,num=x,d;
    while(x!=0){
        d=x%10;
        if (n>INT_MAX/10 or n<INT_MIN/10) return 0;
        n= n*10+d;
        x/=10;
    }
    return n==num;
}

int main (){
    cout<< palindrome(2802);
}
