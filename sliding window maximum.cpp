#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // store indices
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            // 1️⃣ Remove elements out of this window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // 2️⃣ Remove all smaller elements from the back
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            // 3️⃣ Add current index
            dq.push_back(i);

            // 4️⃣ Add to result once the first window is complete
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};
