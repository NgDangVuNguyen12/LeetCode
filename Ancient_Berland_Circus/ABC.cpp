#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);

struct Point {
    int x, y;
};

double distance(Point A, Point B) {
    double dx = A.x - B.x;
    double dy = A.y - B.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {

    Point A, B, C;

    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;

    // Độ dài 3 cạnh
    double a = distance(A, B);
    double b = distance(B, C);
    double c = distance(C, A);

    // Nửa chu vi
    double p = (a + b + c) / 2.0;

    // Diện tích tam giác
    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    // Bán kính đường tròn ngoại tiếp
    double r = (a * b * c) / (4.0 * s);

    // Góc A
    double valueA = (b * b + c * c - a * a) / (2.0 * b * c);

    // Góc B
    double valueB = (a * a + c * c - b * b) / (2.0 * a * c);

    // Góc C
    double valueC = (a * a + b * b - c * c) / (2.0 * a * b);

    // Tránh sai số số thực
    valueA = max(-1.0, min(1.0, valueA));
    valueB = max(-1.0, min(1.0, valueB));
    valueC = max(-1.0, min(1.0, valueC));

    double angleA = acos(valueA);
    double angleB = acos(valueB);
    double angleC = acos(valueC);

    // Tìm số cạnh nhỏ nhất
    int n = 3;

    for (int i = 3; i <= 100; i++) {

        double x = i * angleA / PI;
        double y = i * angleB / PI;
        double z = i * angleC / PI;

        if (fabs(x - round(x)) < 1e-7 &&
            fabs(y - round(y)) < 1e-7 &&
            fabs(z - round(z)) < 1e-7) {

            n = i;
            break;
        }
    }

    // Diện tích đa giác đều
    double area = n * r * r * sin(2.0 * PI / n) / 2.0;

    cout << fixed << setprecision(6) << area;

    return 0;
}