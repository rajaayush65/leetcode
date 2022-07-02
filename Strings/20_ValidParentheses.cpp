#include <bits/stdc++.h>  
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(int i=0;i<s.size();i++){
            if(str.empty()){
                str.push(s[i]);
            }
            else if((str.top()=='{' && s[i]=='}') || (str.top()=='[' && s[i]==']') || (str.top()=='(' && s[i]==')')){
                str.pop();
            } else {
                str.push(s[i]);
            }
        }
        if(str.empty()){
            return true;
        } 
        return false;
    }
};

int main()
{
    fast_cin();
    Solution s;
    string str = "[[]({}())]";
    if(s.isValid(str)){
        cout<<"Valid";
    } else {
        cout<<"Invalid";
    }
    return 0;
}