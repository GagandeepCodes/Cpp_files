#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;
    string s;cin>>s;
    vector<int> roomNums;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = s[i] - '0';
            roomNums.push_back(s[i]);
        }
    }

    map<int, int> m;
    for(int i=0;i<roomNums.size();i++){
        m[roomNums[i]]++;
    }

    return 0;
}