class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m =languages.size();

        vector<unordered_set<int>>userLang(m);//O(m)
        //convert each user's language list into set for fast lookup
        for(int i=0;i<m;i++){ // O(m)
            for(int l:languages[i]){ //O(n)
                userLang[i].insert(l);
            }
        }

        // find all users in 'incompatitable friendships'
        unordered_set<int>candidates;
        for(auto &f: friendships){ //O(m)
            int u=f[0]-1, v=f[1]-1;// convert to 0-based indexing
            bool ok=false;
            for(int l:userLang[u]){ //O(n)
                if(userLang[v].count(l)){
                    ok=true;
                    break;
                }
            }
            if(!ok){
                candidates.insert(u);
                candidates.insert(v);
            }
        }

        // already all good
        if(candidates.empty()){
            return 0;
        }

        // try teaching each language and count how many candidates knew it already
        int ans=INT_MAX;
        for(int lang=1;lang<=n;lang++){ // O(n)
            int alreadyKnew=0;
            for(int user:candidates){ //O(m)
                if(userLang[user].count(lang)){
                    alreadyKnew++;
                }
            }
            ans=min(ans,(int)candidates.size()-alreadyKnew);
        }
        return ans;
    }
};