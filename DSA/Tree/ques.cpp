#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) {
            return result;
        }
        
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = cols-1, top = 0, bottom = rows-1;
        
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
    }

void printSpiral(vector<vector<int> >& matrix) {
    vector<int> result = spiralOrder(matrix);
    int n = result.size();
    for (int i=0;i<n;i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int> > matrix;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    printSpiral(matrix);

    return 0;
}
