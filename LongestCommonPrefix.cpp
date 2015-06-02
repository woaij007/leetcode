class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        int minsize = strs[0].length();
        for(int i = 1; i < strs.size(); i++)
        {
            if(minsize > strs[i].length())
            minsize = strs[i].length();
        }
        
        string prefixstring;
        for(int j = 0; j < minsize + 1; j++)
        {
            prefixstring = strs[0].substr(0,j);
            for(int m = 0; m < strs.size(); m++)
            {
                if (strs[m].find(prefixstring) != 0)
                    return strs[0].substr(0,j-1);
            }
        }
        return prefixstring;
    }
};