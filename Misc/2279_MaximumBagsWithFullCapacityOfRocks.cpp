#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for(int i=0;i<n;i++){
            capacity[i]=abs(capacity[i]-rocks[i]);
        }
        sort(capacity.begin(),capacity.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if((additionalRocks>=capacity[i])){
                additionalRocks-=capacity[i];
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    fast_cin();
    Solution s;
    vector<int> capacity={54,18,91,49,51,45,58,54,47,91,90,20,85,20,90,49,10,84,59,29,40,9,100,1,64,71,30,46,91};
    vector<int> rocks = {14,13,16,44,8,20,51,15,46,76,51,20,77,13,14,35,6,34,34,13,3,8,1,1,61,5,2,15,18};
    int additionalRocks = 77;
    cout<<s.maximumBags(capacity,rocks,additionalRocks);
    return 0;
}