class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //Create return vector
        vector<int> solution;

      //Nested for loops to find values
        for (int i=0; i < nums.size(); i++) {

            for (int j=0; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target && i != j) {
                    solution.push_back(i);
                    solution.push_back(j);
                    break;
                }
            }

            if (solution.size() == 2) {
                break;
            }
        }

        return solution;
    }
};
