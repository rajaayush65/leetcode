#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
}; 

int main()
{
    fast_cin();
    Solution s;
    vector<int> v = {0,0,1,1,1,2,2,3,3,4};
    cout<<s.removeDuplicates(v);
    return 0;
}