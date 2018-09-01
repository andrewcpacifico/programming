/**
 * Copyright (c) 2018 - Andrew C. Pacifico - All Rights Reserved.
 * @author Andrew C. Pacifico <andrewcpacifico@gmail.com>
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> found;
    vector<int> result;

    found[nums[0]] = 0;
    for (int i = 1, size = nums.size(); i < size; ++i) {
      int diff = target - nums[i];
      map<int, int>::iterator it = found.find(diff);

      if (it != found.end()) {
        result.push_back(it->second);
        result.push_back(i);
        break;
      }

      found[nums[i]] = i;
    }

    return result;
  }
};

int main() {
  Solution* sol = new Solution();
  vector<int> nums = {5, 7, 8, 11, 12};

  for (int c : sol->twoSum(nums, 20)) {
    cout << c << ' ';
  }
}
