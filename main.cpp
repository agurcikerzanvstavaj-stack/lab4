#include <iostream>
#include <cmath>
using namespace std;

// ================== ОГОЛОШЕННЯ ФУНКЦІЙ ==================

// ---------- Integer12 ----------
bool in_num(int &n);          // введення
int reverse_num(int n);       // обчислення
void out_rev(int r);          // виведення
void task_Integer12();        // задача

// ---------- Proc12 ----------
void SortInc3(double &A, double &B, double &C);  
void task_Proc12();

// ---------- Proc45 ----------
double LinePointDistance(double x, double y, double A, double B, double C);
void task_Proc45();

// меню
void menu();


// ========================= MAIN ===========================
int main() {
    menu();
    return 0;
}


// ========================= МЕНЮ ===========================
void menu() {
    int ch;

    do {
        cout << "\n====== М Е Н Ю ======" << endl;
        cout << "1 — Integer12 (реверс тризначного числа)" << endl;
        cout << "2 — Proc12 (SortInc3 для двох наборів)" << endl;
        cout << "3 — Proc45 (відстань від точки до прямої)" << endl;
        cout << "0 — Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> ch;

        switch (ch) {
            case 1: task_Integer12(); break;
            case 2: task_Proc12(); break;
            case 3: task_Proc45(); break;
            case 0: cout << "Вихід..." << endl; break;
            default: cout << "Невірний вибір!" << endl;
        }
    } while (ch != 0);
}


// ======================= Integer12 ========================

// введення
bool in_num(int &n) {
    cout << "Введіть тризначне число: ";
    cin >> n;
    return cin.fail();
}

// обчислення
int reverse_num(int n) {
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    return c * 100 + b * 10 + a;
}

// виведення
void out_rev(int r) {
    cout << "Число справа наліво: " << r << endl;
}

// задача
void task_Integer12() {
    int n;
    if (in_num(n)) {
        cout << "Помилка: треба ціле тризначне число!" << endl;
        return;
    }
    int r = reverse_num(n);
    out_rev(r);
}



// ======================== Proc12 ===========================

// процедура сортування
void SortInc3(double &A, double &B, double &C) {
    if (A > B) swap(A, B);
    if (B > C) swap(B, C);
    if (A > B) swap(A, B);
}

// задача
void task_Proc12() {
    double A1, B1, C1;
    double A2, B2, C2;

    cout << "Введіть A1 B1 C1: ";
    cin >> A1 >> B1 >> C1;

    cout << "Введіть A2 B2 C2: ";
    cin >> A2 >> B2 >> C2;

    SortInc3(A1, B1, C1);
    SortInc3(A2, B2, C2);

    cout << "Перший набір після сортування: "
         << A1 << " " << B1 << " " << C1 << endl;

    cout << "Другий набір після сортування: "
         << A2 << " " << B2 << " " << C2 << endl;
}



// ======================== Proc45 ============================

// формула відстані
double LinePointDistance(double x, double y, double A, double B, double C) {
    return fabs(A*x + B*y + C) / sqrt(A*A + B*B);
}

// задача
void task_Proc45() {
    double x, y, A, B, C;

    cout << "Введіть x y: ";
    cin >> x >> y;

    cout << "Введіть A B C: ";
    cin >> A >> B >> C;

    double d = LinePointDistance(x, y, A, B, C);

    cout << "Відстань від точки до прямої: " << d << endl;
}
