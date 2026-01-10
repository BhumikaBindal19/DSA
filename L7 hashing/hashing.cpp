#include <bits/stdc++.h>
using namespace std;


int main(){
    // int n ;
    // cin >> n;
    // int arr[n];
    // for(int i =0; i<n ;i++){
    //     cin >> arr[i];
    // }

    // int hasharr[13] = {0};
    // for(int i =0; i < n ; i++){
    //     hasharr[arr[i]]++;
    // }

    // cout << "Hasharr :";
    // for(int i =0; i<13 ;i++){
    //     cout << hasharr[i] << " ";
    // }
    // cout << endl;
    // int q;
    // cin >> q;
    // while(q--){
    //     int num;
    //     cin >> num;
    //     cout << "freq: "<< hasharr[num] << endl;
    // }

    // int array[517080]={0};  max i can go inside main
    // cout<<"done";

    // string s;
    // cout << "Enter string: ";
    // cin >> s;
    // int hasharr[26]={0};

    // for(int i=0; i<s.size(); i++){
    //     hasharr[s[i]-'a']++;
    // }
    // int q;
    // cout << "\nNo. of queries : ";
    // cin >> q;
    // while(q--){
    //     char ch;
    //     cout << "Enter query: ";
    //     cin >> ch;
    //     cout << "frequency: " << hasharr[ch-'a'] << endl;
    // }
    // return 0;

    // int n ;
    // cin >> n;
    // int x;
    // map<int,int> mp;
    // for(int i =0; i<n ;i++){
    //     cin >> x;
    //     mp[x]++;
    // }

    // cout << "Hashmap :\n";
    // for(auto it: mp){
    //     cout << it.first << "->" << it.second << endl;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     int num;
    //     cin >> num;
    //     cout << num << " freq: "<< mp[num] << endl;
    // }

    // string s;
    // cin >> s;
    // map<char,int> mp;
    // for(int i =0; i<s.size() ;i++){
    //     mp[s[i]]++;
    // }

    // cout << "Hashmap :\n";
    // for(auto it: mp){
    //     cout << it.first << "->" << it.second << endl;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     char ch;
    //     cin >> ch;
    //     cout << ch << " freq: "<< mp[ch] << endl;
    // }

    int n ;
    cin >> n;
    int x;
    map<int,int> mp;
    for(int i =0; i<n ;i++){
        cin >> x;
        mp[x]++;
    }

    cout << "Hashmap :\n";
    int max=-1;
    int min=INT_MAX;
    for(auto it: mp){
        cout << it.first << "->" << it.second << endl;
        if(it.second>max) max=it.second;
        if(it.second<min) min=it.second;
    }
    cout << "Max freq: " << max << endl;
    cout << "Min freq: " << min << endl;
    
}