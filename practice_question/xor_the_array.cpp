#include<bits/stdc++.h>
using namespace std;

int minimize_difference(int N, vector<int>& A, int K, vector<int>& operand) {
    vector<std::vector<int>> possible_values(N);

    // Generate all possible values for each element in A
    for (int i = 0; i < N; ++i) {
        int a = A[i];
        unordered_set<int> values;
        for (int mask = 0; mask < (1 << K); ++mask) {
            int new_value = a;
            for (int j = 0; j < K; ++j) {
                if (mask & (1 << j)) {
                    new_value ^= operand[j];
                }
            }
            values.insert(new_value);
        }
        possible_values[i] = vector<int>(values.begin(), values.end());
        sort(possible_values[i].begin(), possible_values[i].end());
    }

    // Collect all possible values with their original indices
    vector<pair<int, int>> all_values;
    for (int i = 0; i < N; ++i) {
        for (int value : possible_values[i]) {
            all_values.emplace_back(value, i);
        }
    }
    sort(all_values.begin(), all_values.end());

    // Sliding window approach to find the minimum range
    unordered_map<int, int> count;
    int left = 0;
    int min_range = INT_MAX;
    int distinct_count = 0;

    for (int right = 0; right < all_values.size(); ++right) {
        int value = all_values[right].first;
        int index = all_values[right].second;

        if (count[index] == 0) {
            ++distinct_count;
        }
        ++count[index];

        while (distinct_count == N) {
            min_range = min(min_range, all_values[right].first - all_values[left].first);
            int left_value = all_values[left].first;
            int left_index = all_values[left].second;
            --count[left_index];
            if (count[left_index] == 0) {
                --distinct_count;
            }
            ++left;
        }
    }

    return min_range;
}
int main(){
    int n,k;cin>>n>>k;
    vector<int> A(n,0);
    vector<int> B(k,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<k;i++){
        cin>>B[i];
    }
    cout<<minimize_difference(n,A,k,B)<<endl;
}