#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void ITERATOR(){
    vector<int> v= {1,2,3,4,5,6,7,8,9,0};
    vector<int> :: iterator it = v.begin();
    cout << *(it) << '\n';
    it++;
    cout << *(it) << '\n';
    it+=2;
    cout << *(it) << '\n';

    auto it2 = v.end();
    cout << *(it2) << '\n';
    it2--;
    cout << *(it2) << '\n';
}

int main(){
    ITERATOR();
}