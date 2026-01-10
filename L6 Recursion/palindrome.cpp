#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int n = s.length();
    for(int i =0 ; i< n/2 ; i++){
        if(s[i]!=s[n-1-i]) return 0;
    }
    return 1;
}

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << palindrome(s);
}
