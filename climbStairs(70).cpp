#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 ||n==1){
            return 1;
        }
        if(n==2) return 2;
        int ans=climbStairs(n-1)+climbStairs(n-2);
        return ans;
    }
};
