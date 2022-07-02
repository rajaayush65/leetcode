#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp=x,result=0,r=0;
        while(temp>0){
            r=temp%10;
            result=(result*10)+r;
            temp/=10;
        }
        if(result==x){
            return true;
        }
        return false;
    }
};

int main()
{
    fast_cin();
    Solution s;
    int n=121;
    if(s.isPalindrome(n)){
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
    return 0;
}