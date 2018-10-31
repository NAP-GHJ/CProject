//
// Created by ghj on 2018/10/31.
//
#include <unordered_map>
#include <vector>

using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        int n = (int) nums.size();
        for (int i = 0; i < n; i++) {

            auto p = map.find(target - nums[i]);
            if (p != map.end()) {
                return {p->second + 1, i + 1};
            }

            map[nums[i] + 1];
        }
    }
};

int main(int argc, char **argv) {
    vector<int> v;

    return 0;
}