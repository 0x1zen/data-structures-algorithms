#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> mp;
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    int value = target - nums[i];
    auto it = mp.find(value);
    if (it != mp.end()) {
      return {it->second, i};
    }
    mp[nums[i]] = i;
  }
  return {};
}
int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);
  for (int value : ans) {
    cout << value << " ";
  }
}