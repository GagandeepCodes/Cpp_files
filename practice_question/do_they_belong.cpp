#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

double area(Point p1, Point p2, Point p3) {
    return std::abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

bool isInside(Point a, Point b, Point c, Point p) {
    double A = area(a, b, c);
    double A1 = area(b, c, p);
    double A2 = area(a, c, p);
    double A3 = area(b, a, p);
    return A == A1 + A2 + A3;
}

int pointsBelong(int x1, int y1, int x2, int y2, int x3, int y3, int xp, int yp, int xq, int yq) {
    Point a = {static_cast<double>(x1), static_cast<double>(y1)};
    Point b = {static_cast<double>(x2), static_cast<double>(y2)};
    Point c = {static_cast<double>(x3), static_cast<double>(y3)};
    Point p = {static_cast<double>(xp), static_cast<double>(yp)};
    Point q = {static_cast<double>(xq), static_cast<double>(yq)};

    double ab = std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
    double bc = std::sqrt(std::pow(c.x - b.x, 2) + std::pow(c.y - b.y, 2));
    double ac = std::sqrt(std::pow(a.x - c.x, 2) + std::pow(a.y - c.y, 2));

    int output = 0;
    if (ab + bc > ac && bc + ac > ab && ab + ac > bc) {
        if (isInside(a, b, c, p) && isInside(a, b, c, q)) {
            output = 3;
        } else if (isInside(a, b, c, p)) {
            output = 1;
        } else if (isInside(a, b, c, q)) {
            output = 2;
        } else {
            output = 4;
        }
    }

    return output;
}