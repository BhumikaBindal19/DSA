#include <bits/stdc++.h>
using namespace std;

/*
Intuition:
- I need to find the minimum day on which I can make m bouquets,
  with each bouquet requiring k adjacent flowers.
- For any fixed day, I can check which flowers have bloomed and
  count consecutive bloomed flowers to see how many bouquets I can make.
- If I can make m bouquets on a certain day, I can also make them
  on every later day.
- So I need to find the first day for which it becomes possible.
- The possible days lie between the minimum and maximum bloomDay,
  so I can search for that first valid day instead of checking every day.
*/

class Solution {
public:
    bool possible(vector<int>& bloomDay ,int m, int k , int day){
        int count = 0 , total = 0;

        for(int x : bloomDay){
            if(x<=day) count++;
            else{
                total+=(count/k);
                count = 0;
                if(total>=m) return true;
            }
        }
        total+=(count/k);
        return total>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long check = m * 1LL * k ; 
        if(check > bloomDay.size()) return -1;

        int low = bloomDay[0] , high = bloomDay[0];
        int ans = high ;

        for(int x : bloomDay){
            low= min(x,low);
            high = max(high,x);
        }

        while(low <= high){
            int mid = low + (high-low)/2;

            if(possible(bloomDay , m , k , mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;

    cout << sol.minDays(bloomDay, m, k) << endl;

    return 0;
}