#include<bits/stdc++.h>
using namespace std;

bool isValidRomanNumeral(const string& s) {
    unordered_map<char, int> values = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int repeatCount = 0;
    char lastChar = '\0';
    for (size_t i = 0; i < s.length(); ++i) {
        char current = s[i];
        if (values.find(current) == values.end()) {
            return false;
        }
        if (current == lastChar) {
            repeatCount++;
            if ((current == 'I' || current == 'X' || current == 'C' || current == 'M') && repeatCount > 2) {
                return false;
            } else if (!(current == 'I' || current == 'X' || current == 'C' || current == 'M') && repeatCount > 0) {
                return false;
            }
        } else {
            repeatCount = 0;
        }

        if (i > 0) {
            char previous = s[i - 1];
            if (values[previous] < values[current]) {
                if (!(previous == 'I' || previous == 'X' || previous == 'C')) {
                    return false;
                }
                if (i > 1 && values[s[i - 2]] == values[previous]) {
                    return false;
                }
                if (values[current] > 10 * values[previous]) {
                    return false;
                }
            }
        }
        lastChar = current;
    }
    return true;
}

int romanToInt(const string& s) {
    unordered_map<char, int> values = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (i > 0 && values[s[i]] > values[s[i - 1]]) {
            result += values[s[i]] - 2 * values[s[i - 1]];
        } else {
            result += values[s[i]];
        }
    }
    return result;
}

int main() {
    string s;cin>>s;
    bool flag = isValidRomanNumeral(s);
    int ans = 0;
    if(flag){
        ans = romanToInt(s);
    }
    if(flag)cout<<ans<<endl;
    else cout<<"Invalid"<<endl;
    return 0;
}
