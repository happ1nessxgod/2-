#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");
    double a, b, c;
    std::cout << "Введите коэффициенты a, b и c квадратного уравнения (ax^2 + bx + c = 0): ";
    std::cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        std::cout << "Уравнение имеет бесконечное количество решений." << std::endl;
    }
    else if (a == 0 && b == 0) {
        std::cout << "Уравнение не имеет решений." << std::endl;
    }
    else if (a == 0) {
        double x = -c / b;
        std::cout << "Уравнение имеет одно решение: x = " << x << std::endl;
    }
    else {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "Уравнение имеет два действительных корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            std::cout << "Уравнение имеет один действительный корень: x = " << x << std::endl;
        }
        else {
            std::cout << "Уравнение не имеет действительных корней." << std::endl;
        }
    }

    return 0;
}
