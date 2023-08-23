class Solution {
public:
    string reorganizeString(string s) {
        
        vector<int> ans(26);
		for (auto& chr: s) { if(++ans[chr-97] > (s.size()+1)/2) return "";}
		priority_queue<pair<int, char>> pq;
		for (int i = 0; i < 26; i++) {
			if (ans[i]) {pq.push({ans[i], 97+i});}
		}
		int i = 0;
		pair<int, char> prev = pq.top(); 
        pq.pop();
		s[i++] = prev.second;
		while (!pq.empty()) {
			pair<int, char> curr = pq.top(); pq.pop();
			s[i++] = curr.second;
			if (--prev.first) pq.push(prev);
			prev = curr;
		}
		return s;

        
    }
};