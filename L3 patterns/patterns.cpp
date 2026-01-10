#include <iostream>
using namespace std;

void pat2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}
void pat3(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}
void pat4(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << i + 1 << ' ';
        }
        cout << '\n';
    }
}
void pat5(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n-i-1; j++){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}
void pat6(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n-i-1; j++){
            cout << j+1 << ' ';
        }
        cout << '\n';
    }
}
void pat7(int n){
    for (int i = 1; i <= n; i++){
        for(int j=1; j<n+1-i;j++){
            cout<< ' ';
        }
        for (int j = 1; j <=2*i-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
}
void pat8(int n){
    for (int i = 1; i <= n; i++){
        for(int j=1; j<=i-1;j++){
            cout<< ' ';
        }
        for (int j = 1; j <=2*(n-i+1)-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
}
void pat9(int n){
    for (int i = 1; i <= n; i++){
        for(int j=1; j<n+1-i;j++){
            cout<< ' ';
        }
        for (int j = 1; j <=2*i-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++){
        for(int j=1; j<=i-1;j++){
            cout<< ' ';
        }
        for (int j = 1; j <=2*(n-i+1)-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
}
void pat10(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n-i-1; j++){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}
void pat11(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if(i%2!=0) cout << j%2 << ' ';
            else cout << (j+1)%2 << ' ';
        }
        cout << "\n";
    }
}
void pat12(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<< j << ' ';
        }
        for (int j = 1; j <= 2*(n-i) ; j++){
            cout << ' ' << ' ';
        }
        for (int j = i; j >= 1; j--){
            cout<< j << ' ';
        }
        cout << "\n";
    }
}
void pat13(int n){
    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << num << ' ';
            num+=1;
        }
        cout << "\n";
    }
}
void pat14(int n){
    for (int i = 0; i < n; i++){
        for (char ch = 'A'; ch <= 'A'+ i; ch++){
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void pat15(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n-i-1; j++){
            cout << char('A'+j) << ' ';
        }
        cout << '\n';
    }
}
void pat16(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << char('A'+i) << " ";
        }
        cout << "\n";
    }
}
void pat17(int n){
    for (int i = 1; i <= n; i++){
        for(int j=1; j<n+1-i;j++){
            cout<< ' ' << ' ';
        }
        for (int j = 1; j <=i; j++){
            cout << char('A'+j-1) << ' ';
        }
        for (char j ='A'+i-2; j >= 'A'; j--){
            cout << j << ' ';
        }
        cout << '\n';
    }
}
void pat18(int n){
    for (int i = 1; i <= n; i++){
        for (char j = n-i+'A'; j <='A'+ n-1; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}
void pat23(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << char('A'+n-j) << " ";
        }
        cout << "\n";
    }
}
// void pat23(int n){
//     for (int i = 1; i <= n; i++){
//         char ch= 'A'+ n -1 ;
//         for (int j = 1; j <= i; j++){
//             cout << ch << " ";
//             ch--;
//         }
//         cout << "\n";
//     }
// }
void pat19(int n){
    for(int i =1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1; j++){
            cout<<'*'<<' ';
        }
        for(int j=1 ; j<=2*(i-1); j++){
            cout << ' '<<' ';
        }
        for(int j=1 ; j<=n-i+1 ; j++ ){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    for(int i =1 ; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            cout<<'*'<<' ';
        }
        for(int j=1 ; j<=2*(n-i); j++){
            cout << ' '<<' ';
        }
        for(int j=1 ; j<=i ; j++ ){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}
void pat20(int n){
    for(int i =1 ; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            cout<<'*'<<' ';
        }
        for(int j=1 ; j<=2*(n-i); j++){
            cout << ' '<<' ';
        }
        for(int j=1 ; j<=i ; j++ ){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    for(int i =2 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1; j++){
            cout<<'*'<<' ';
        }
        for(int j=1 ; j<=2*(i-1); j++){
            cout << ' '<<' ';
        }
        for(int j=1 ; j<=n-i+1 ; j++ ){
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}
void pat21(int n){
    // for(int i=1; i<=n ; i++){
    //     if(i==1 || i==n){
    //         for(int j=1 ; j<=n; j++){
    //             cout << '*';
    //         }
    //     cout<<'\n';
    //     }
    //     else{
    //         cout<<'*';
    //         for(int j=1; j<=n-2; j++){
    //             cout<<' ';
    //         }
    //         cout<<'*';
    //         cout<<'\n';
    //     }
    // }
    // cout<<'\n';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n) cout<<'*';
            else cout<<' ';
        }
        cout<< '\n';
    }
}
void pat22(int n){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int top = i-1;
            int down = 2*n-1-i;
            int left = j-1;
            int right = 2*n-1-j;
            cout << n- min(min(top,down),min(left,right));
        }
        cout<<'\n';
    }
}

int main(){
    int n;
    cin >> n;
    pat22(n);
}