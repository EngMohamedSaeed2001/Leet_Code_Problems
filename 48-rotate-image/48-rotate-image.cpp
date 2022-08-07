class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size=matrix.at(0).size();
        unordered_map<int,vector<int>>map;
        for (int k=size-1; k>=0 ; k--) {
            for (int i =size-1; i >= 0; i--) {
                map[k].push_back(matrix.at(i).at(k));
            }
        }
        for (int i = 0; i < size; ++i) {
            matrix.at(i).swap(map[i]);
        }
    }
};