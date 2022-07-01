#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area = (min(height[l],height[r])*(r-l));
        while(l<r){
            if(height[l]<height[r]){
                l++;
            } else {
                r--;
            }
            area=max(area,min(height[l],height[r])*(r-l));
        }
        return area;
    }
};

int main()
{
    fast_cin();
    vector<int> v ={1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(v);
    return 0;
}