
#include <iostream>
#include <cmath>
#include <algorithm> // для min, max
using namespace std;

// ===== Процедура сортування трьох чисел без if =====
void SortInc3(double &A, double &B, double &C) {
    double minVal = min({A, B, C});
    double maxVal = max({A, B, C});
    double midVal = (A + B + C) - (minVal + maxVal);

    A = minVal;
    B = midVal;
    C = maxVal;
}

// ===== Функція для обчислення відстані від точки до прямої =====
double LinePointDistance(double x, double y, double A, double B, double C) {
    return fabs(A*x + B*y + C) / sqrt(A*A + B*B);
}

int main() {
    // ======= 1. Сортування двох наборів чисел =======
    double A1, B1, C1;
    double A2, B2, C2;

    cout << "=== Сортування трьох чисел (SortInc3) ===" << endl;
    cout << "Введiть три числа (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;

    cout << "Введiть три числа (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    SortInc3(A1, B1, C1);
    SortInc3(A2, B2, C2);

    cout << "\nПiсля сортування:" << endl;
    cout << "Набiр 1: " << A1 << " " << B1 << " " << C1 << endl;
    cout << "Набiр 2: " << A2 << " " << B2 << " " << C2 << endl;

    // ======= 2. Відстань від точки до прямої =======
    double x1, y1, A, B, C;
    double x2, y2, A4, B4, C4;
    double x3, y3, A5, B5, C5;

    cout << "\n=== Вiдстань вiд точки до прямої (LinePointDistance) ===" << endl;

    cout << "Введiть координати точки 1 (x1, y1) i коефiцiєнти прямої (A, B, C): ";
    cin >> x1 >> y1 >> A >> B >> C;

    cout << "Введiть координати точки 2 (x2, y2) i коефiцiєнти прямої (A, B, C): ";
    cin >> x2 >> y2 >> A4 >> B4 >> C4;

    cout << "Введiть координати точки 3 (x3, y3) i коефiцiєнти прямої (A, B, C): ";
    cin >> x3 >> y3 >> A5 >> B5 >> C5;

    cout << "\nВiдстанi:" << endl;
    cout << "d1 = " << LinePointDistance(x1, y1, A, B, C) << endl;
    cout << "d2 = " << LinePointDistance(x2, y2, A4, B4, C4) << endl;
    cout << "d3 = " << LinePointDistance(x3, y3, A5, B5, C5) << endl;

    cout << "\n=== Кiнець програми ===" << endl;

    return 0;
}
