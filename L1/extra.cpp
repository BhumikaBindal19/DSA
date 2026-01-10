#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    queue<char> q;
    stack<char> st;
    for(int i = 0; i< s.size();i++){
        st.push(s[i]);
        q.push(s[i]);
    }
    for(int i =0 ; i< s.size(); i++){
        if(st.top()!=q.front()) return 0;
        st.pop();
        q.pop();
    }
    return 1;
}
int main(){
    string s;
    cin >> s;
    cout<< palindrome(s);
}