class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
            vector<int> answer;
            for(auto x : n1)
            {
                if(find(n2.begin(),n2.end(),x)!=n2.end() && find(answer.begin(),answer.end(),x)==answer.end())
                    answer.push_back(x);
                
        }
    return answer;
        
    }
};