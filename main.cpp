#include <iostream>
#include <cmath>
using namespace std;

// ==== ОГОЛОШЕННЯ ФУНКЦІЙ =====

// Задача 1
bool in_num(int &num);
int calc_first_digit(int num);
void out_first_digit(int res);
void task1();

// Задача 2
bool in_x(double &x);
double calc_y(double x);
void out_y(double y);
void task2();

// Задача 3
bool in_AB(int &A, int &B);
bool calc_AB(int A, int B);
void out_AB(bool r);
void task3();

// Меню
void menu();


// ======================= MAIN ============================
int main() {
    menu();
    return 0;
}


// ======================= МЕНЮ =============================
void menu() {
    int choice;

    do {
        cout << "\n===== М Е Н Ю =====" << endl;
        cout << "1 — Задача 1 (перша цифра тризначного числа)" << endl;
        cout << "2 — Задача 2 (формула з x)" << endl;
        cout << "3 — Задача 3 (хоча б одне число непарне)" << endl;
        cout << "0 — Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 0: cout << "Вихід..." << endl; break;
            default: cout << "Помилка. Повторіть." << endl; break;
        }

    } while (choice != 0);
}


// ======================= ЗАДАЧА 1 =========================

// введення
bool in_num(int &num) {
    cout << "Введiть тризначне число: ";
    cin >> num;
    return cin.fail();  
}

// обчислення
int calc_first_digit(int num) {
    return num / 100;
}

// виведення
void out_first_digit(int res) {
    cout << "Перша цифра (сотні): " << res << endl;
}

// задача
void task1() {
    int num;
    if (in_num(num)) {
        cout << "Помилка! Потрібно ціле число." << endl;
        return;
    }
    int res = calc_first_digit(num);
    out_first_digit(res);
}


// ======================= ЗАДАЧА 2 =========================

// введення
bool in_x(double &x) {
    cout << "Введіть x: ";
    cin >> x;
    return cin.fail();
}

// обчислення
double calc_y(double x) {
    return cbrt(pow(x, 2) - 2 * fabs(sin(pow(x, 3))) * fabs(tan(x)) * pow(2.5, cos(x)))
         / (0.625 * x + 2 * (log2(pow(x, 3) + 7.5)));
}

// виведення
void out_y(double y) {
    cout << "Результат y = " << y << endl;
}

// задача
void task2() {
    double x;
    if (in_x(x)) {
        cout << "Помилка! Введіть число." << endl;
        return;
    }
    double y = calc_y(x);
    out_y(y);
}


// ======================= ЗАДАЧА 3 =========================

// введення
bool in_AB(int &A, int &B) {
    cout << "Введіть A і B: ";
    cin >> A >> B;
    return cin.fail();
}

// обчислення
bool calc_AB(int A, int B) {
    return (A % 2 != 0) || (B % 2 != 0);
}

// виведення
void out_AB(bool r) {
    if (r) cout << "Істинне: хоча б одне число непарне." << endl;
    else   cout << "Хибне: обидва числа парні." << endl;
}

// задача
void task3() {
    int A, B;
    if (in_AB(A, B)) {
        cout << "Помилка! Введіть цілі числа." << endl;
        return;
    }
    bool result = calc_AB(A, B);
    out_AB(result);
}
