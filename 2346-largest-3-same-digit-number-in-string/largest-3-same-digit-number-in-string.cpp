class Solution {
public:
    string largestGoodInteger(string num) {
         int n = num.size();
    string ans="";
    string finalans="";
    for(int i = 1; i < n - 1; i++) {
        if(num[i] == num[i-1] && num[i] == num[i+1]) {
            ans.push_back(num[i-1]);
            ans.push_back(num[i]);
            ans.push_back(num[i+1]);
            i+=2;
            
    }
    }
    if(ans.size()==0){
        return finalans;
    }
    sort(ans.begin(), ans.end(), greater<char>()); 
    for(int i=0;i<3;i++){
        finalans.push_back(ans[i]);
    }
    return finalans;
    }
};