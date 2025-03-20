#include<bits/stdc++.h>
using namespace std;
//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
        }
};
///14.longest common prefix
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if(strs.empty()) return "";
            string prefix=strs[0];
            for(int i=1;i<strs.size();i++){
                while(strs[i].find(prefix)!=0){
                    prefix=prefix.substr(0,prefix.length()-1);
                }
                if(prefix.empty()){
                    return "";
                }
    
            }
            return prefix;
    
            
        }
    };
