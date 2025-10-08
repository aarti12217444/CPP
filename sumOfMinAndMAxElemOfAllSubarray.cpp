#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> sumOfMinAndMaxInSubarrays(vector<int>& nums, int k) {
    deque<int> maxDq, minDq;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        // Remove elements out of this window
        if (!maxDq.empty() && maxDq.front() <= i - k) maxDq.pop_front();
        if (!minDq.empty() && minDq.front() <= i - k) minDq.pop_front();

        // Maintain decreasing order for max deque
        while (!maxDq.empty() && nums[i] >= nums[maxDq.back()]) maxDq.pop_back();
        maxDq.push_back(i);

        // Maintain increasing order for min deque
        while (!minDq.empty() && nums[i] <= nums[minDq.back()]) minDq.pop_back();
        minDq.push_back(i);

        // Once window is valid, compute sum of max and min
        if (i >= k - 1) {
            int windowSum = nums[maxDq.front()] + nums[minDq.front()];
            result.push_back(windowSum);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = sumOfMinAndMaxInSubarrays(nums, k);
    for (int sum : result) {
        cout << sum << " ";
    }

    return 0;
}
