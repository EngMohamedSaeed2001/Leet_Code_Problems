class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>vec;
        unordered_map<string ,vector<int>>index;
        //set<string>set;
        vector<string>temp=strs;
        vector<vector<string>>res;
       // vector<int>k;

        int ind=-1,i=0;

        for (int i = 0; i < strs.size(); ++i) {
            sort(temp.at(i).begin(),temp.at(i).end());
          //  set.insert(temp.at(i));
            index[temp.at(i)].push_back(i);
        }


            for (auto map:index) {
                for (int j = 0; j < map.second.size(); ++j) {
                    vec.push_back(strs.at(map.second.at(j)));
                }
                res.push_back(vec);
                vec.clear();
            }


        return res;
    }
};