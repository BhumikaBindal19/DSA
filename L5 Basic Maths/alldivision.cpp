#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void alldivisions(int x){
    int num=1;
    vector<int> v;
    while(num*num<=x){
        // if (x%num==0){ cout << num << ' '<< x/num << ' ';}
        if(x%num==0){
            v.push_back(num);
            if (x/num!=num) v.push_back(x/num);
        }
        num++;
    }
    sort(v.begin(),v.end());
    for(int i: v) cout<<i<<' ';
    
    // int num=1;
    // set<int> s;
    // while(num<=sqrt(x)){
    //     if(x%num==0){
    //         s.insert(num);
    //         if (x/num!=num) s.insert(x/num);
    //     }
    //     num++;
    // }
    // for(int i: s) cout<<i<<' ';
}

int main (){
    alldivisions(90);
}
