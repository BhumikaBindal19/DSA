#include <bits/stdc++.h>
using namespace std;

/*
Intuition:
- I need to find the minimum eating speed k such that all bananas
  can be eaten within h hours.
- For any fixed k, I can calculate exactly how many hours are needed:
  each pile takes ceil(pile / k) hours.
- If a speed works, every faster speed will also work.
  If a speed doesn't work, every slower speed will also fail.
- So instead of checking every speed from 1 to pmax, I can search
  for the minimum valid speed.
- I keep the smallest valid speed as ans and continue searching
  on the lower side to see if an even smaller speed works.
*/

class Solution {
public:
    long long total(vector<int>& piles ,int k){
        long long total = 0;
        for(int x : piles){
            total+=ceil((double)x/k);
        }
        return total;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        int pmax = piles[0];
        for(int x : piles) pmax=max(pmax,x);

        int low = 1 , high = pmax;
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long time = total(piles , mid);
            if(time <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << sol.minEatingSpeed(piles, h) << endl;

    return 0;
}