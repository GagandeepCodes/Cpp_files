#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Building {
    int left, right, height;

    Building(int left, int right, int height) : left(left), right(right), height(height) {}
};

struct KeyPoint {
    int x, y;

    KeyPoint(int x, int y) : x(x), y(y) {}
};

bool comparePoints(const KeyPoint& a, const KeyPoint& b) {
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

int main() {
    int N;
    cin >> N;

    vector<Building> buildings;
    for (int i = 0; i < N; ++i) {
        int left, right, height;
        cin >> left >> right >> height;
        buildings.push_back(Building(left, right, height));
    }

    vector<KeyPoint> keyPoints;

    for (const Building& building : buildings) {

        keyPoints.emplace_back(building.left, building.height);

        keyPoints.emplace_back(building.right, -building.height);
    }

    sort(keyPoints.begin(), keyPoints.end(), comparePoints);

    vector<KeyPoint> result;
    vector<int> maxHeight(1, 0);


    for (const KeyPoint& point : keyPoints) {
        if (point.y > 0) {

            maxHeight.push_back(point.y);
            int currentMaxHeight = *max_element(maxHeight.begin(), maxHeight.end());
            if (result.empty() || currentMaxHeight != result.back().y) {
                result.emplace_back(point.x, currentMaxHeight);
            }
        } else {
            maxHeight.erase(find(maxHeight.begin(), maxHeight.end(), -point.y));
            int currentMaxHeight = *max_element(maxHeight.begin(), maxHeight.end());
            if (result.empty() || currentMaxHeight != result.back().y) {
                result.emplace_back(point.x, currentMaxHeight);
            }
        }
    }

    for (const KeyPoint& point : result) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}