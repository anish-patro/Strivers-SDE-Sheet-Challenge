bool isPalindrome(const string& s, int start, int end) {
    while (start <= end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void solve(const string& s, int ind, vector<string>& path, vector<vector<string>>& ans) {
    if (ind == s.size()) {
        ans.push_back(path);
        return;
    }

    for (int i = ind; i < s.size(); i++) {
        if (isPalindrome(s, ind, i)) {
            path.push_back(s.substr(ind, i - ind + 1));
            solve(s, i + 1, path, ans);
            path.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> path;
    solve(s, 0, path, ans);
    return ans;
}
