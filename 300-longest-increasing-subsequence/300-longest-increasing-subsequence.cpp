class Solution {
public:
   int lengthOfLIS(vector<int>& nums) {
        int max=0;
        vector<int>index;
        for (int i = 0; i < nums.size(); ++i) {
            index.push_back(1);
        }

        for (int i = 1; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if(nums.at(i)>nums.at(j)&&index.at(j)+1>index.at(i)){
                    index.at(i)=index.at(j)+1;
                }
            }
        }

        sort(index.begin(),index.end());

        max=index.at(index.size()-1);

        return max;
    }
};