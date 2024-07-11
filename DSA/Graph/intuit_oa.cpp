#include <bits/stdc++.h>
using namespace std;
int f(string &s) {
    int maxi = 0;
    int curr = 0;
    int curr_upper = 0;
    string tmp_string = "";
    unordered_map<int, string> strings;
    string nums = "0123456789";
    int size = s.size();

    for (int i = 0; i < size; ++i) {
        if (nums.find(s[i]) == string::npos) {
            if (isupper(s[i])) {
                curr_upper++;
            }
            curr++;
            tmp_string += s[i];
            if (curr_upper > 0 && i == size - 1) {
                strings[curr] = tmp_string;
                maxi = max(maxi, curr);
            }
        } else {
            if (curr_upper > 0) {
                strings[curr] = tmp_string;
                maxi = max(maxi, curr);
            }
            curr = 0;
            if (i != size - 1) {
                tmp_string = "";
                curr_upper = 0;
            }
        }
    }
    
    if (strings.empty() && curr_upper > 0) {
        return tmp_string.size();
    } else if (strings.empty()) {
        return -1;
    } else {
        return strings[maxi].size();
    }
}

int main() {
    string s; cin>>s;
    int res = f(s);
    cout<<res<<endl;
    return 0;
}
