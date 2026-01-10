#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void FOR(){
    vector<int> v= {1,2,3,4,5,6,7,8,9,0};

    for(int i = 0; i< v.size(); i++){
        cout << v[i] ;
    }

    for(auto element: v){
        cout << element ;
    }

    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) ;
    }
}
int main(){
    FOR();
}