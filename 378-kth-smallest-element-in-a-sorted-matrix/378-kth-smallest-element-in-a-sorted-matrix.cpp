class Solution {
public:
      int kthSmallest(vector<vector<int>>& matrix, int k) {
        int sm;
        vector<int>m;

        for (auto arr:matrix) {
            for (auto it:arr) {
                m.push_back(it);
            }
        }
        sort(m.begin(),m.end());
        sm=m.at(k-1);
        return sm;
    }
};