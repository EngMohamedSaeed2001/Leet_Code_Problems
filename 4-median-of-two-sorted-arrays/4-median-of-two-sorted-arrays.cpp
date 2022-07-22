class Solution {
public:
      double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med=0.0;
        int ind=0;

        if (nums2.empty()&&nums1.empty())
            return med;

            if(nums1.size()<nums2.size()){
                for (int i : nums1) {
                    nums2.push_back(i);
                }
                sort(nums2.begin(),nums2.end());

                ind = nums2.size()/2;

                if (nums2.size()%2==0&&nums2.size()!=1){
                    double a=((double )nums2.at(ind));
                    double b=((double )nums2.at(ind-1));
                    med=((double )(a+b)/2);
                } else{
                    med=((double )nums2.at(ind));
                }



            } else{
                for (int i : nums2) {
                    nums1.push_back(i);
                }
                sort(nums1.begin(),nums1.end());
                ind = nums1.size()/2;
                if (nums1.size()%2==0&&nums1.size()!=1){
                    double a=((double )nums1.at(ind));
                    double b=((double )nums1.at(ind-1));
                    med=((double )(a+b)/2);
                } else{
                    med=((double )nums1.at(ind));
                }
            }



        return med;
    }



};