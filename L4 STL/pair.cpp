#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void PAIR(){
    pair<int, int> p = {3, 4};
    cout << p.first << ' ' << p.second << '\n';
    pair<int, pair<int, int>> s= {3, {4,5}};
    cout << s.first << ' ' << s.second.first<< s.second.second;
    pair<int , int> arr[]={{1,2},{3,4},{5,6}};
    cout << arr[2].first;
}

int main(){
    PAIR();
}