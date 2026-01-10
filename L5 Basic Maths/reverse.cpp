#include <iostream>
#include <climits>
using namespace std;

int reverse(int x) {
        int n=0;
        while(x!=0){
            int d=x%10;
            if (n>INT_MAX/10 or n<INT_MIN/10) return 0;
            n= n*10+d;
            x/=10;
        }
        return n;
    }

int main (){
    cout<< reverse(2802);
}
