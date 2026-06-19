class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) 
            return 0;
        int ans = 0;
        int count;
        int l=0;
        int r=l;
        unordered_map<char, int> visited;
        while(s[r]!='\0'){
            if((visited.find(s[r])!=visited.end())&&(visited[s[r]]>=l&&visited[s[r]]<=r)){
                    l = visited[s[r]] + 1;
                    count=(r-l + 1);
                    visited[s[r]]=r;
                    r++;
                    
                    if(count>ans){
                    ans=count;
                    }
                
            }else{
                visited[s[r]]=r;
                count=(r-l + 1);
                r++;
                
                if(count>ans){
                    ans=count;
                    }
            }
 
            }
            return ans;
    }
};