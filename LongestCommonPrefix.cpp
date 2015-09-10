// Write a function to find the longest common prefix string amongst an array of strings.


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // if there is no string in the array, return ""
        if (strs.size() == 0)
            return "";
        
        // the longest common prefix string must be in strs[0]
        string prefixstring;
        for(int j = 1; j <= strs[0].size(); j++)
        {
            // get every prefix string of strs[0] starting from length 1 
            prefixstring = strs[0].substr(0,j);
            for(int m = 0; m < strs.size(); m++) // m=0 make sure check strs[0] itself when arraySize==1
            {
                // check all strings to see if they all have the prefix string
                if (strs[m].find(prefixstring) != 0)
                    return strs[0].substr(0,j-1);
            }
        }
        return prefixstring;
    }
};