class Solution {
public:
  
  map<string,string>mp;
  int n=0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
      
      n++;
      string num = to_string(n);
      string res="https://tinyurl.com";
      res+=(string)num;
      mp[res]=longUrl;
      return res;
      
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));