class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string kq="";
        sort(s.begin(), s.end());
        string dau = s[0], cuoi = s[s.size()-1];
        for (int i=0; i<cuoi.size(); i++){
            if (dau[i]==cuoi[i]){
                kq+=cuoi[i];
            }
            else{
                break;
            }
        }
        return kq;
    }
};