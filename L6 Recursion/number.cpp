#include <bits/stdc++.h>
using namespace std;
// int count=0;
// void name(int n){
//     if(count ==n) return;
//     cout<< "B ";
//     count++; 
//     name(n);
// }
// int main(){
//     name(5);
// }

void name(int i , int n){
    if(i==n) return;
    cout<< 'B';
    name(i+1,n);
}
void printn(int i , int n){
    if(i>n) return;
    cout<< i;
    printn(i+1,n);
}
void revn(int n , int i){
    if(i>n) return;
    cout<< n;
    revn(n-1,i);
}
void btprintn(int i , int n){
    if(i>n) return ;
    btprintn(i, n-1);
    cout<< n ;
}
void btrevn(int i , int n){
    if(i>n) return ;
    btrevn(i+1, n);
    cout<< i ;
}

int main(){
    name(0,5);

    printn(1,5);
    revn(5,1);

    btprintn(1,5);
    btrevn(1,5);
}
