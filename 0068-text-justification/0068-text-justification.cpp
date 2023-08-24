class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) 
    {
        vector<string> res;
        for (int i = 0, j = 0; i < words.size(); j = ++i)
        {            
            int width = 0;
            while (i < words.size() && width + words[i].size() + (i-j) <= maxWidth)
            {
                width += words[i].size();
                i++;
            }
            
            i--;
            string line;
            int spaces = maxWidth - width;
		
            int gap    = (i == j || i == words.size()-1) ? 1 : spaces/(i-j); 
            int extra  = (i == j || i == words.size()-1) ? 0 : spaces%(i-j);
            
            while (j <= i)
            {
                if (!line.empty())
                {
                    line += string(gap, ' '), spaces -= gap;
                    if (extra) line += ' ', extra--, spaces--;
                }
    
                line += words[j++];
            }
            line += string(spaces, ' ');
            
            res.push_back(move(line));
        }
        
        return res;

        
        
        
    }
    
};