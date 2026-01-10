#include <iostream>
#include <math.h>
using namespace std;

int hcf(int a,int b){
    // brute force
    // int hcf=1,num=1;
    // int n=min(a,b);
    // while(num<=n){
    //     if(a%num==0 && b%num==0 && num>hcf) hcf=num;
    //     num++;
    // }
    // return hcf;

    //euclidean way - muchhhh betttterrr
    while(a>0 && b>0){
        if (a>b) a=a%b;
        else b=b%a;
    }
    return (a==0)? b:a;
}
int main (){
    cout<< hcf(28,2);
}
