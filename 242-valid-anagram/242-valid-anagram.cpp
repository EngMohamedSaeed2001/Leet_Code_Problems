class Solution {
public:
  bool isAnagram(string s, string t) {

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s.size()==t.size()){
        for(int i=0; i<s.size(); i++ ){
            if(s.at(i)!=t.at(i)){
                return false;
            }
        }
    }else{
        return false;
    }
    return true;
}
};