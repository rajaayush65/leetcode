#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end()); 
        return nums.size();
    }
}; 

int main()
{
    fast_cin();
    Solution s;
    vector<int> v = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<s.removeElement(v,val)<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}