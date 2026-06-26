class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> mp;
        unordered_set<string> materials;
        int n = recipes.size();
        for(int i=0; i<n; i++){
            mp[recipes[i]] = ingredients[i];
        }

        for(int i=0; i<supplies.size(); i++){
            materials.insert(supplies[i]);
        }
        vector<string> answer;
        int flag = 1;
        while(flag!=0){
            flag = 0;
        for(const auto &p : mp){
            int found = 1;
            for(int j=0; j<p.second.size(); j++){
                if(materials.find(p.second[j])==materials.end()){
                    found = 0;
                    break;
                }
            }
            if(found && materials.find(p.first) == materials.end()){
                answer.push_back(p.first);
                materials.insert(p.first);
                flag = 1;
            }
        }
        }
        return answer;
    }
};