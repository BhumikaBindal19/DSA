#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void VECTOR(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,string>> v2;
    v2.push_back({1,"ab"});
    v2.emplace_back(2,"cd");

    vector<int> v3(5);

    vector<int> v4(5,100);

    vector<int> v5(v4);

    cout<< v5.size() << '\n';

    int f = v.front();
    cout << f << ' ';
    v.front()-=10;
    cout << f << ' ';
    cout << v.front() << '\n';


    int l = v.back();
    cout << l << ' ';
    v.back()-=10;
    cout << l << ' ';
    cout << v.back() << '\n';

    vector<int> v6 = {1,2,3,4,5,6,7};
    v6.erase(v6.begin()+1);
    v6.erase(v6.begin()+1,v6.begin()+4);
    for(auto i: v6){
        cout << i << ' ' ;
    }
}

int main(){
    VECTOR();
}