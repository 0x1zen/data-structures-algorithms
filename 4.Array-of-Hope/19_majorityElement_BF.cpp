#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums) {
  int majorityElement(vector<int> & nums) {
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      mp[nums[i]]++;
    }
    int majorityElementCount = 0;
    int majorityElement = 0;
    for (auto it : mp) {
      if (it.second > majorityElementCount) {
        majorityElementCount = it.second;
        majorityElement = it.first;
      }
    }
    return majorityElement;
  }
}
int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(nums);
}